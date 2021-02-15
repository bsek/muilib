#ifndef AREA_H
#define AREA_H

#include <map>
#include <functional>
#include "RootClass.h"
#include "Notify.h"

namespace Zune {
    enum EventType {
        PRESSED,
        CHECK,
        SELECT,
        ACTIVE
    };

    class Event {
    public:
        virtual void invoke() = 0;
    };

    template<typename R>
    class EventCommand : public Event {
    public:
        R *receiver;

        void (R::*m_method)();

        void invoke() override {
            ((receiver)->*(m_method))();
        }
    };

    constexpr ULONG CUSTOM_EVENT = TAG_USER + 21;
    constexpr ULONG CUSTOM_MUI_CLASS = TAG_USER + 20;
}

namespace Zune {

    class Window;

    class Area : public Notify {
    public:
        Area();

        void build() override;

        void setBackground(LONG value);

        LONG bottomEdge() const;

        Object *contextMenu() const;

        void setContextMenu(Object *value);

        Object *contextMenuTrigger() const;

        void setContextMenuTrigger(Object* value);

        char controlChar() const;

        void setControlChar(char value);

        LONG cycleChain() const;

        void setCycleChain(LONG value);

        BOOL disabled() const;

        void setDisabled(BOOL value);

        BOOL draggable() const;

        void setDraggable(BOOL value);

        BOOL dropable() const;

        void setDropable(BOOL value);

        void setFillArea(BOOL value);

        void setFixHeight(long value);

        void setFixHeightText(std::string text);

        void setFixWidth(long value);

        void setFixWidthText(std::string text);

        void setFont(struct TextFont* font);

        struct TextFont *font() const;

        void setFrame(long frame);

        void setFramePhantomHoriz(bool value);

        void setFrameTitle(std::string title);

        LONG height() const;

        LONG horizDisappear() const;

        void setHorizDisappear(LONG value);

        WORD horizWeight() const;

        void setHorizWeight(WORD value);

        LONG innerBottom() const;

        void setInnerBottom(long value);

        LONG innerLeft() const;

        void setInnerLeft(long value);

        LONG innerRight() const;

        void setInnerRight(long value);

        LONG innerTop() const;

        void setInnerTop(long value);

        void setInputMode(long inputMode);

        void setMaxHeight(long height);

        void setMaxWidth(long width);

        LONG leftEdge() const;

        BOOL pressed() const;

        LONG rightEdge() const;

        BOOL selected() const;

        void setSelected(BOOL value);

        STRPTR shortHelp() const;

        void setShortHelp(STRPTR value);

        BOOL showMe() const;

        void setShowMe(BOOL value);

        void setShowSelState(bool value);

        LONG timer() const;

        LONG topEdge() const;

        LONG vertDisappear() const;

        void setVertDisappear(LONG value);

        WORD vertWeight() const;

        void setVertWeight(WORD value);

        LONG width() const;

        void setWeight(long value);

        struct Window *window() const;

        Object *windowObject() const;

        IPTR hide();

        IPTR show();

        void addEventHandler(struct MUI_EventHandlerNode &ehNode);

        void removeEventHandler(struct MUI_EventHandlerNode &ehNode);

        Class *getMcc() const;

        void setMcc(Class *mcc);

        virtual IPTR handleContextMenuBuild(LONG mx, LONG my);

        virtual IPTR handleContextMenuChoice(Object *item);

        virtual IPTR handleCreateBubble(LONG x, LONG y, char *txt, IPTR flags);

        virtual IPTR handleCreateShortHelp(LONG mx, LONG my);

        virtual IPTR handleDeleteBubble(IPTR bubble);

        virtual IPTR handleDeleteShortHelp(STRPTR help);

        /*
    virtual IPTR handleDragBegin(Object * object);
    virtual IPTR handleDragDrop(Object * object, LONG x, LONG y);
    virtual IPTR handleDragFinish(Object * object);
    virtual IPTR handleDragQuery(Object * object);
    virtual IPTR handleDragReport(Object * object, LONG x, LONG y, LONG update);
    */

        virtual IPTR handleDrawBackground(Class *cl, Object *object, struct MUIP_DrawBackground *msg);

        virtual IPTR handleDispatch(Class *cl, Object *object, Msg msg);

        virtual IPTR handleDraw(Class *cl, Object *obj, struct MUIP_Draw *msg);

        virtual IPTR handleNew(Class *cl, Object *obj, struct opSet *msg);

        virtual IPTR handleDispose(Class *cl, Object *obj, Msg msg);

        virtual IPTR handleSet(Class *cl, Object *obj, struct opSet *msg);

        virtual IPTR handleGet(Class *cl, Object *obj, struct opGet *msg);

        virtual IPTR handleSetup(Class *cl, Object *obj, struct MUI_RenderInfo *msg);

        virtual IPTR handleCleanup(Class *cl, Object *obj, Msg msg);

        virtual IPTR handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax *msg);

        virtual IPTR handleCustomEvent(Class *cl, Object *obj, Msg msg);

        virtual IPTR handleEvent(Class *cl, Object *obj, struct MUIP_HandleEvent *msg);

        virtual IPTR handleInput(Class *cl, Object *obj, struct MUIP_HandleInput *msg);

        virtual Class *registerClass();

        template<typename T>
        void addEvent(Notify *obj, EventType eventType, T *, void (T::*)());

        bool hasEvent(ULONG eventId);

        Class *registerClassWithId(ClassID classId);

    private:
        std::map<ULONG, Event *> eventIds;

        ULONG generateId();

        Class *mcc;

        Class *createCustomClass(ClassID classId);

        ULONG EVENT_ID_START = TAG_USER + 22;
    };
}

template<typename T>
void Zune::Area::addEvent(Notify *object, EventType eventType, T *t, void (T::*method)()) {
    ULONG id = generateId();

    auto eventCommand = new EventCommand<T>{};
    eventCommand->receiver = t;
    eventCommand->m_method = method;

    this->eventIds[id] = static_cast<Event *>(eventCommand);

    if (eventType == EventType::PRESSED) {
        std::cerr << "Setting up pressed event:" << id
                  << std::endl; // << ": COMMAND: " << CUSTOM_ACTION_COMMAND << " : " << method << " on " << object << '\n';

        object->notify((IPTR) MUIA_Pressed, (IPTR) FALSE, (IPTR) this->object, (IPTR) 2, (IPTR) CUSTOM_EVENT,
                       (IPTR) id);
    }
    /*
if (eventType == EventType::ACTIVE) {
    std::cerr << "Setting up active event:" << CUSTOM_EVENT << ":" << id << " on " << object << '\n';
    DoMethod(object, MUIM_Notify, MUIA_Cycle_Active, MUIV_EveryTime, object, 3, CUSTOM_EVENT, id, MUIV_TriggerValue);
}
*/
}

#endif /* AREA_H */
