#ifndef MIU_PLUS_AROS_MAINAREA_H
#define MIU_PLUS_AROS_MAINAREA_H


#include <Window.h>
#include <Application.h>
#include "SourceEditor.h"
#include <Scrollgroup.h>
#include <Group.h>
#include <Cycle.h>
#include <Text.h>
#include <Image.h>
#include <Scale.h>
#include <Knob.h>
#include <Radio.h>
#include <Register.h>
#include <Scrollbar.h>
#include <Scrollgroup.h>
#include <Virtgroup.h>
#include <Prop.h>
#include <Settings.h>
#include <Settingsgroup.h>
#include <Slider.h>
#include <Title.h>
#include <Numericbutton.h>
#include <Dtpic.h>
#include <Popobject.h>
#include <exec/types.h>

class MainArea : public Zune::Area {
private:
    Zune::Group m_horizontalGroup;
    Zune::Cycle m_cycle;
    Zune::Text m_button;
    Zune::Text m_button2;
    Zune::Image m_checkmark;
    Zune::Scale m_scale;
    Zune::Knob m_knob;
    Zune::Radio m_radio;
    Zune::Register m_register;
    Zune::Scrollbar m_scrollbar;
    Zune::Prop m_prop;
    Zune::Slider m_slider;
    Zune::Scrollgroup m_scrollgroup;
    Zune::Virtgroup m_virtualgroup;
    Zune::Settingsgroup m_settingsgroup;
    Zune::Dtpic m_dtpic;
    Zune::Popobject m_popobject;
    Zune::Group m_hgroup;
    Object* button;
    LONG id;
    std::string *pic;
public:
    explicit MainArea(LONG id);

    void checkmarkSelected();
    void buttonPressed();
    void cycleChanged();
    void radioChanged();
    void init();
    Zune::Group& getMainGroup();
};


#endif //MIU_PLUS_AROS_MAINAREA_H
