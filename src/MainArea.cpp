#include <iostream>
#include <Group.h>
#include <Window.h>
#include <ZuneFactory.h>
#include <proto/alib.h>
#include <Volumelist.h>
#include <Floattext.h>
#include <Listview.h>
#include <List.h>
#include <Poppen.h>
#include <proto/asl.h>
#include "MainArea.h"

MainArea::MainArea(LONG id) : id(id) {
    std::cout << "MainArea base const" << std::endl;

    init();
}

struct Hook *listDisplayHook = new Hook;

IPTR listDisplayFunc(struct Hook *hook, char** array, STRPTR value) {
    printf("display func called\n");
    *array = value;
    return 0;
}

struct Hook *openHook = new Hook;
struct Hook *closeHook = new Hook;

IPTR openHookFunc(struct Hook *hook, Object *sender, APTR data) {
    printf("Pressed open");
    return TRUE;
}

IPTR closeHookFunc(struct Hook *hook, Object *sender, APTR data) {
    printf("Pressed close");
    return TRUE;
}

void MainArea::init() {
    std::cout << "MainArea init" << std::endl;
    registerClass();
    m_horizontalGroup = Zune::ZuneFactory::createHorizontalGroup();

    std::string cycleLabel{"CycleLabel"};
    std::initializer_list<std::string> values = {"Cycle", "Button", "Checkmark",
                                                 "Scale", "Knob", "Radio", "Scrollbar",
                                                 "Prop", "Scrollgroup", "Settingsgroup",
                                                 "Slider", "Numeric button", "String",
                                                 "Text", "Dtpic", "Coloradjust",
                                                 "Colorfield", "Levelmeter", "Dirlist",
                                                 "Volumelist", "Floattext", "Gauge", "Listview", "Poppen", "Popasl"};
    STRPTR array = "value1";


    m_button = Zune::ZuneFactory::createButton("TEST");
    m_button2 = Zune::ZuneFactory::createButton("TEST2");
    Zune::Text m_button3 = Zune::ZuneFactory::createButton("TEST3");
    m_checkmark = Zune::ZuneFactory::createCheckmark("Label");
    m_cycle = Zune::ZuneFactory::creatCycle(cycleLabel, values);
    m_scale = Zune::ZuneFactory::createScale(TRUE);
    m_knob = Zune::ZuneFactory::createKnob();
    m_radio = Zune::ZuneFactory::createRadio(values, FALSE);
    m_register = Zune::ZuneFactory::createRegister(values, false);
 //   m_register = Zune::ZuneFactory::createTitle();
    m_scrollbar = Zune::ZuneFactory::createScrollbar(MUIV_Scrollbar_Type_Top);
    m_prop = Zune::ZuneFactory::createProp(10, true, false);
    m_settingsgroup = Zune::ZuneFactory::createSettingGroup();
    m_settingsgroup.addObject(m_button2);

    auto m_numbericbutton = Zune::ZuneFactory::createNumbericbutton(10,25,"");
    std::string contents = "A text";
    std::string accept = "";
    auto m_string = Zune::ZuneFactory::createString(contents, 10, accept);
    auto m_text = Zune::ZuneFactory::createText(contents, accept);
    m_slider = Zune::ZuneFactory::createSlider(1,20);

    /* Popstring */
    openHook->h_Entry = (APTR) HookEntry;
    openHook->h_SubEntry = (APTR) openHookFunc;
    closeHook->h_Entry = (APTR) HookEntry;
    closeHook->h_SubEntry = (APTR) closeHookFunc;

    std::string popButtonText = "This is a pop button";
    std::string popStringString = "This is a text";
    auto popstringText = Zune::ZuneFactory::createString(contents, 10, accept);
    auto popButton = Zune::ZuneFactory::createButton(popButtonText);

    button = MUI_NewObject(MUIC_Text, MUIA_Text_Contents, (IPTR)array, TAG_END);
    m_hgroup = Zune::ZuneFactory::createHorizontalGroup();
    m_hgroup.addObject(button);
    m_popobject = Zune::ZuneFactory::createPopobject(popButton.getObject(), popstringText.getObject(), openHook, closeHook, FALSE, m_hgroup.getObject());
    //auto m_popasl = Zune::ZuneFactory::createPopasl(ASL_FileRequest, popButton.getObject(), popstringText.getObject());

    auto m_poppen = Zune::Poppen{};
    m_poppen.build();

    static struct TagItem light_tags[] =
            {
                    {MUIA_Window_Borderless, TRUE},
                    {MUIA_Window_CloseGadget, FALSE},
                    {MUIA_Window_SizeGadget, FALSE},
                    {MUIA_Window_DepthGadget, FALSE},
                    {MUIA_Window_DragBar, FALSE},
                    { TAG_DONE }
            };
    auto m_coloradjust = Zune::ZuneFactory::createColoradjust();
    auto m_colorfield = Zune::ZuneFactory::createColorfield(50, 255, 100);

    std::string levelmeterLabel{"Levelmeter"};
    auto m_levelmeter = Zune::ZuneFactory::createLevelmeter(levelmeterLabel);
   // m_popstring.setOpenHook(openHook);
    m_virtualgroup = Zune::ZuneFactory::createVirtgroup();
    m_virtualgroup.addObject(m_button3);
    m_scrollgroup = Zune::ZuneFactory::createScrollgroup(m_virtualgroup);

    m_dtpic = Zune::ZuneFactory::createDtpic("test.png");

    std::string directory = "sys:";
    auto m_dirlist = Zune::ZuneFactory::createDirlist(directory);
    Zune::Volumelist m_volumelist{};
    m_volumelist.build();

    std::string text = "Sed ut perspiciatis unde omnis iste natus error sit voluptatem accusantium doloremque laudantium, totam rem aperiam, eaque ipsa quae ab illo inventore veritatis et quasi architecto beatae vitae dicta sunt explicabo. Nemo enim ipsam voluptatem quia voluptas sit aspernatur aut odit aut fugit, sed quia consequuntur magni dolores eos qui ratione voluptatem sequi nesciunt. Neque porro quisquam est, qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit, sed quia non numquam eius modi tempora incidunt ut labore et dolore magnam aliquam quaerat voluptatem. Ut enim ad minima veniam, quis nostrum exercitationem ullam corporis suscipit laboriosam, nisi ut aliquid ex ea commodi consequatur? Quis autem vel eum iure reprehenderit qui in ea voluptate velit esse quam nihil molestiae consequatur, vel illum qui dolorem eum fugiat quo voluptas nulla pariatur?";
    auto m_floattext = Zune::ZuneFactory::createFloattext(text);
    std::string gaugeText = "This is a gauge";
    auto m_gauge = Zune::ZuneFactory::createGauge(TRUE, 9, 10, 0, gaugeText);

    STRPTR list1 = "test1";
    STRPTR list2 = "test2";

    listDisplayHook->h_Entry = (APTR) HookEntry;
    listDisplayHook->h_SubEntry = (APTR) listDisplayFunc;

    auto m_list = Zune::List<STRPTR>{};
    m_list.insertTop(list1);
    m_list.insertTop(list2);
    m_list.setDisplayHook(listDisplayHook);
    m_list.build();
    auto m_listview = Zune::ZuneFactory::createListview(m_list.getObject());

    m_register.addObject(m_cycle);
    m_register.addObject(m_button);
    m_register.addObject(m_checkmark);
    m_register.addObject(m_scale);
    m_register.addObject(m_knob);
    m_register.addObject(m_radio);
    m_register.addObject(m_scrollbar);
    m_register.addObject(m_prop);
    m_register.addObject(m_scrollgroup);
    m_register.addObject(m_settingsgroup);
    m_register.addObject(m_slider);
    m_register.addObject(m_numbericbutton);
    m_register.addObject(m_string);
    m_register.addObject(m_text);
   // m_register.addObject(m_popobject);
    m_register.addObject(m_dtpic);
    m_register.addObject(m_coloradjust);
    m_register.addObject(m_colorfield);
    m_register.addObject(m_levelmeter);
    m_register.addObject(m_dirlist);
    m_register.addObject(m_volumelist);
    m_register.addObject(m_floattext);
    m_register.addObject(m_gauge);
    m_register.addObject(m_listview);
    m_register.addObject(m_poppen);
    m_register.addObject(m_popobject);

    m_horizontalGroup.addObject(m_register);

    this->addEvent(&m_button, Zune::EventType::PRESSED, this, &MainArea::buttonPressed);
    this->addEvent(&m_dtpic, Zune::EventType::PRESSED, this, &MainArea::buttonPressed);
    this->addEvent(&m_button3, Zune::EventType::PRESSED, this, &MainArea::buttonPressed);
    this->addEvent(&m_checkmark, Zune::EventType::SELECTED, this, &MainArea::checkmarkSelected);
    this->addEvent(&m_cycle, Zune::EventType::ACTIVE,this, &MainArea::cycleChanged);
    this->addEvent(&m_radio, Zune::EventType::ACTIVE, this, &MainArea::radioChanged);
    //m_cycle.addEvent(&m_cycle, Zune::EventType::SELECT, this, &MainArea::buttonPressed);
   // cycle.getClass().addEvent(&cycle.getClass(), Zune::EventType::SELECT, &cycle, &ZuneObject::Cycle::onEvent);

}

void MainArea::checkmarkSelected() {
    std::cout << "Checkmark selected" << std::endl;
}

void MainArea::buttonPressed() {
    std::cout << "Button pressed" << "image" << m_dtpic.name() << std::endl;
}

Zune::Group& MainArea::getMainGroup() {
    return m_horizontalGroup;
}

void MainArea::cycleChanged() {
    std::cout << "Cycle changed to: " << m_cycle.active() << std::endl;
}

void MainArea::radioChanged() {
    std::cout << "Radio changed to: " << m_radio.active() << std::endl;
}


