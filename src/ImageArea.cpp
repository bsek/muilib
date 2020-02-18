#include <CMUI_Virtgroup.h>
#include <CMUI_Label.h>
#include <CMUI_String.h>
#include <CMUI_Radio.h>
#include <CMUI_Rectangle.h>
#include <CMUI_Cycle.h>
#include <CMUI_Register.h>
#include "ImageArea.h"

ImageArea::ImageArea() : CMUI_Virtgroup() {
    registerClass();

    rGenderContent = new CONST_STRPTR[3];
    rGenderContent[0] = "Female";
    rGenderContent[1] = "Male";
    rGenderContent[2] = NULL;

    CMUI_Label lHead("New Personal Record", MUIO_Label_Centered);
    CMUI_Label lInfo("   Please, fill in the blanks to add new personal record.   ", MUIO_Label_Centered);

    CMUI_String StrName("", 50);
    StrName.set(MUIA_Frame, MUIV_Frame_String);

    CMUI_Label obj_aux1("        Name :", MUIO_Label_DoubleFrame);

    Object * obj = MUI_NewObject(MUIC_Group, TAG_END);
    CMUI_Group obj_aux0{obj};
    obj_aux0.setColumns(2);
    obj_aux0.addMember(*obj_aux1);
    obj_aux0.addMember(*StrName);

    CMUI_String StrPhoneNumber("", 50);
    StrPhoneNumber.set(MUIA_Frame, MUIV_Frame_String);
    StrPhoneNumber.set(MUIA_String_Accept, (IPTR) "0123456789");

    CMUI_Label obj_aux3("Phone Number :", MUIO_Label_DoubleFrame);

    obj_aux0.addMember(*obj_aux3);
    obj_aux0.addMember(*StrPhoneNumber);

    CMUI_Radio rGender(label, rGenderContent);
    rGender.set(MUIA_Frame, MUIV_Frame_Group);

    set(MUIA_Frame, MUIV_Frame_Virtual);

    CMUI_Rectangle rectangle(MUI_Rectangle_Direction::VERTICAL, 100, "");
    cycle = new CMUI_Cycle("Cycle", rGenderContent);

    cmuiRegister = new CMUI_Register(rGenderContent);
    cmuiRegister->addMember(*rGender);
    cmuiRegister->addMember(cycle->operator*());

    addEvent(*rGender, SELECT, [&](struct InstanceEvent*) -> void {
        std::cout << " test " << std::endl;
    });

    addEvent(cycle->operator*(), ACTIVE, [&](struct InstanceEvent* event) -> void {
        std::cout << " test "  << cycle->active() << std::endl;
    });

    addMember(*lHead);
    addMember(*lInfo);
    addMember(*obj_aux0);
    addMember(*rectangle);
    addMember(cmuiRegister->operator*());
}

IPTR ImageArea::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax* askMinMax) {
    DoSuperMethodA(cl, obj, (Msg) askMinMax);

    std::cout << "Initial width:" << askMinMax->MinMaxInfo->DefWidth << std::endl;
    std::cout << "Initial height:" << askMinMax->MinMaxInfo->DefHeight << std::endl;

    askMinMax->MinMaxInfo->MinWidth += 40;
    askMinMax->MinMaxInfo->DefWidth += 200;
    askMinMax->MinMaxInfo->MaxWidth += 400;
    askMinMax->MinMaxInfo->MinHeight += 20;
    askMinMax->MinMaxInfo->DefHeight += 20;
    askMinMax->MinMaxInfo->MaxHeight += 300;

    return 0;
}
/*
IPTR ImageArea::drawBackground(LONG left, LONG top, LONG width, LONG height, LONG xoffset, LONG yoffset, LONG flags) {
    return CMUI_Area::drawBackground(left, top, width, height, xoffset, yoffset, flags);
}
*/
IPTR ImageArea::handleDispatch(Class *cl, Object *obj, Msg msg) {
    return CMUI_Area::handleDispatch(cl, obj, msg);
}
