#include <iostream>
#include <Group.h>
#include <Window.h>
#include <ZuneFactory.h>
#include <proto/alib.h>

#include "MainArea.h"

MainArea::MainArea(LONG id) : id(id) {
    std::cout << "MainArea base const" << std::endl;

    init();
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
    std::initializer_list<std::string> values = {"Cycle", "Button", "Checkmark", "Scale", "Knob", "Radio", "Scrollbar", "Prop", "Scrollgroup", "Settingsgroup", "Slider", "Numeric button", "String", "Text", "Popstring", "Dtpic", "Coloradjust", "Colorfield", "Levelmeter"};

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
    auto popstringText = Zune::ZuneFactory::createText(popStringString, accept);
    auto popButton = Zune::ZuneFactory::createButton(popButtonText);
    auto m_popstring = Zune::ZuneFactory::createPopstring(popButton.getObject(), popstringText.getObject(),
                                                          openHook,
                                                          closeHook, FALSE);
    auto m_coloradjust = Zune::ZuneFactory::createColoradjust();
    auto m_colorfield = Zune::ZuneFactory::createColorfield(50, 255, 100);
    std::string levelmeterLabel{"Levelmeter"};
    auto m_levelmeter = Zune::ZuneFactory::createLevelmeter(levelmeterLabel);
   // m_popstring.setOpenHook(openHook);
    m_virtualgroup = Zune::ZuneFactory::createVirtgroup();
    m_virtualgroup.addObject(m_button3);
    m_scrollgroup = Zune::ZuneFactory::createScrollgroup(m_virtualgroup);

    m_dtpic = Zune::ZuneFactory::createDtpic("test.png");

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
    m_register.addObject(m_popstring);
    m_register.addObject(m_dtpic);
    m_register.addObject(m_coloradjust);
    m_register.addObject(m_colorfield);
    m_register.addObject(m_levelmeter);

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


