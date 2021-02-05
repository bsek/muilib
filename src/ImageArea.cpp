#include <Virtgroup.h>
#include <Label.h>
#include <String.h>
#include <Radio.h>
#include <Rectangle.h>
#include <Cycle.h>
#include <Register.h>
#include <Button.h>
#include "ImageArea.h"
#include <proto/graphics.h>

ImageArea::ImageArea() : Virtgroup() {
    registerClass();

    mouse_x = 0;
    mouse_y = 0;
    move_active = false;

    rGenderContent = new CONST_STRPTR[3];
    rGenderContent[0] = "Female";
    rGenderContent[1] = "Male";
    rGenderContent[2] = NULL;

    Label lHead("New Personal Record", MUIO_Label_Centered);
    Label lInfo("   Please, fill in the blanks to add new personal record.   ", MUIO_Label_Centered);

    String StrName("", 50);
    StrName.set(MUIA_Frame, MUIV_Frame_String);

    Label obj_aux1("        Name :", MUIO_Label_DoubleFrame);

    Object *obj = MUI_NewObject(MUIC_Group, TAG_END);
    Group obj_aux0{obj};
    obj_aux0.setColumns(2);
    obj_aux0.addMember(*obj_aux1);
    obj_aux0.addMember(*StrName);

    String StrPhoneNumber("", 50);
    StrPhoneNumber.set(MUIA_Frame, MUIV_Frame_String);
    StrPhoneNumber.set(MUIA_String_Accept, (IPTR) "0123456789");

    Label obj_aux3("Phone Number :", MUIO_Label_DoubleFrame);

    obj_aux0.addMember(*obj_aux3);
    obj_aux0.addMember(*StrPhoneNumber);

    Radio rGender(label, rGenderContent);
    rGender.set(MUIA_Frame, MUIV_Frame_Group);

    set(MUIA_Frame, MUIV_Frame_Virtual);
    set(MUIA_InputMode, MUIV_InputMode_RelVerify);

    Rectangle rectangle(MUI_Rectangle_Direction::VERTICAL, 100, "");
    cycle = new Cycle("Cycle", rGenderContent);

    cmuiRegister = new Register(rGenderContent);
    cmuiRegister->addMember(*rGender);
    cmuiRegister->addMember(cycle->operator*());

//    addEvent(*rGender, SELECT, [&](struct InstanceEvent*) -> void {
//        std::cout << " test " << std::endl;
//    });

//    addEvent(cycle->operator*(), ACTIVE, [&](struct InstanceEvent* event) -> void {
    //       std::cout << " test "  << cycle->active() << std::endl;
    //   });


    addEvent(this, EventType::PRESSED, this, &ImageArea::setMoveActive);

    /* addMember(*lHead);
     addMember(*lInfo);
     addMember(*obj_aux0);
     addMember(*rectangle);
     addMember(cmuiRegister->operator*());
 */

}

void ImageArea::setMoveActive() {
    printf("here");
    move_active = !move_active;
}

IPTR ImageArea::handleAskMinMax(struct IClass *cl, Object *obj, struct MUIP_AskMinMax *askMinMax) {
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

IPTR ImageArea::handleDraw(Class *cl, Object *obj, struct MUIP_Draw *msg) {
    printf("redrawing...\n");
    DoSuperMethodA(cl, obj, (Msg) msg); // ALWAYS REQUIRED!

    if (msg->flags & MADF_DRAWUPDATE) {
    } else if (msg->flags & MADF_DRAWOBJECT) {
    }

    auto rasterport = _rp(obj);
    SetAPen(rasterport, 3);
    auto top = _mtop(obj);
    auto left = _mleft(obj);
    auto right = _mright(obj);
    auto bottom = _mbottom(obj);
    RectFill(rasterport, left, top, right, bottom);

  //  if (mouse_x > 0 && (mouse_x > left && mouse_x < right)) {
        SetAPen(rasterport, 5);
        RectFill(rasterport, mouse_x, top, mouse_x, bottom);
   // }
    // if MADF_DRAWOBJECT wasn't set, MUI just wanted to update
    // the frame or some other part of our object. In this case
    // we just do nothing.

    return 0;
}

IPTR ImageArea::handleSetup(Class *cl, Object *obj, struct MUI_RenderInfo* msg) {
    ehnode.ehn_Object = obj;
    ehnode.ehn_Class = cl;
    ehnode.ehn_Events = IDCMP_ACTIVEWINDOW | IDCMP_INACTIVEWINDOW;// | IDCMP_MOUSEMOVE;

    addEventHandler(ehnode);
   // MUI_RequestIDCMP( obj, IDCMP_MOUSEBUTTONS | IDCMP_MOUSEMOVE | IDCMP_RAWKEY );
    return DoSuperMethodA(cl, obj, msg);
}

IPTR ImageArea::handleEvent(Class *cl, Object *obj, struct MUIP_HandleEvent *msg) {
    switch (msg->imsg->Class) {
//        case IDCMP_ACTIVEWINDOW:
        case IDCMP_MOUSEMOVE:
            printf("MouseX: %d, MouseY: %d", msg->imsg->MouseX, msg->imsg->MouseY);
            if (move_active) {
                mouse_x = msg->imsg->MouseX;
                mouse_y = msg->imsg->MouseY;

                MUI_Redraw(this->object, MADF_DRAWUPDATE);
            }
            break;
        default:
            break;
    }
    //return IPTR(nullptr);

    return DoSuperMethodA(cl, obj, msg);
}

IPTR ImageArea::handleInput(Class *cl, Object *obj, struct MUIP_HandleInput *msg) {
    switch (msg->imsg->Class) {
//        case IDCMP_ACTIVEWINDOW:
        case IDCMP_MOUSEMOVE:
            printf("MouseX: %d, MouseY: %d", msg->imsg->MouseX, msg->imsg->MouseY);
            if (move_active) {
                mouse_x = msg->imsg->MouseX;
                mouse_y = msg->imsg->MouseY;

                MUI_Redraw(this->object, MADF_DRAWUPDATE);
            }
            break;
        default:
            break;
    }
    //return IPTR(nullptr);

    return DoSuperMethodA(cl, obj, msg);
}
