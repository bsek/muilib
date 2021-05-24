
#ifndef ZUNEFACTORY_H
#define ZUNEFACTORY_H

#include <utility>

#include "Text.h"
#include "Image.h"
#include "Scale.h"
#include "Cycle.h"
#include "Balance.h"
#include "Knob.h"
#include "Radio.h"
#include "Register.h"
#include "Scrollbar.h"
#include "Prop.h"
#include "Virtgroup.h"
#include "Scrollgroup.h"
#include "Group.h"
#include "Settings.h"
#include "Settingsgroup.h"
#include "Slider.h"
#include "Numericbutton.h"
#include "String.h"
#include "Text.h"
#include "Window.h"
#include "Popstring.h"
#include "Dtpic.h"
#include "Title.h"
#include "Bitmap.h"
#include "Coloradjust.h"
#include "Colorfield.h"
#include "Levelmeter.h"
#include "Dirlist.h"
#include "Floattext.h"
#include "Gauge.h"
#include "Listview.h"
#include "Poplist.h"
#include "Popobject.h"
#include "Popasl.h"

namespace Zune {
    struct ZuneFactory {

        static Popasl createPopasl(ULONG type, Object* button, Object* text) {
           Popasl popasl{};
           popasl.setType(type);
           popasl.setButton(button);
           popasl.setString(text);
           popasl.build();
           return popasl;
        }

        static Popobject createPopobject(Object* button, Object* text, struct Hook* openHook, struct Hook* closeHook, BOOL enableToggle, Object* obj) {
            Popobject p{};
            p.setObject(obj);
            p.setButton(button);
            p.setString(text);
            p.setToggle(enableToggle);
            p.setOpenHook(openHook);
            p.setCloseHook(closeHook);
            p.build();
            return p;
        }

        static Poplist createPoplist(STRPTR *array) {
            Poplist poplist{};
            poplist.setArray(array);
            poplist.build();
            return poplist;
        }

        static Listview createListview(Object* list) {
            Listview listview{};
            listview.setList(list);
            listview.build();
            return listview;
        }

        static Gauge createGauge(BOOL horiz, LONG current, LONG max, LONG divide, std::string& infotext) {
            Gauge gauge{};
            gauge.setHoriz(horiz);
            gauge.setMax(max);
            gauge.setCurrent(current);
            gauge.setDivide(divide);
            gauge.setInfoText(infotext);
            gauge.setDupInfoText(TRUE);
            gauge.build();
            return gauge;
        }

        static Floattext createFloattext(std::string& text) {
            Floattext floattext{};
            floattext.setText(text);
            floattext.build();
            return floattext;
        }

        static Dirlist<std::string> createDirlist(std::string& dir) {
            Dirlist<std::string> dirlist{};
            dirlist.setDirectory(dir);
            dirlist.build();
            return dirlist;
        }

        static Levelmeter createLevelmeter(std::string& label) {
            Levelmeter levelmeter{};
            levelmeter.setLabel(label);
            levelmeter.build();
            return levelmeter;
        }

        static Colorfield createColorfield(ULONG red, ULONG green, ULONG blue) {
            Colorfield colorfield{};
            colorfield.setBlue(blue);
            colorfield.setRed(red);
            colorfield.setGreen(green);
            colorfield.build();
            return colorfield;
        }

        static Coloradjust createColoradjust() {
            Coloradjust coloradjust{};
            coloradjust.build();
            return coloradjust;
        }

        static Bitmap createBitmap(struct BitMap *bitMap) {
            Bitmap bitmap{};
            bitmap.setBitmap(bitMap);
            bitmap.build();
            return bitmap;
        }

        static Title createTitle() {
            Title title{};
            title.build();
            return title;
        }

        static Dtpic createDtpic(STRPTR filename) {
            Dtpic dtpic{};
            dtpic.setName(filename);
            dtpic.setLightenOnMouse(TRUE);
            dtpic.setFrame(MUIV_Frame_Button);
            dtpic.setInputMode(MUIV_InputMode_RelVerify);
            dtpic.build();
            return dtpic;
        }

        static Popstring createPopstring(Object* button, Object* text, struct Hook* openHook, struct Hook* closeHook, BOOL enableToggle) {
            Popstring p{};
            p.setButton(button);
            p.setString(text);
            p.setToggle(enableToggle);
            p.setOpenHook(openHook);
            p.setCloseHook(closeHook);
            p.build();
            return p;
        }

        static Window createWindow(LONG id, Object* menustrip) {
            Window w{};
            w.setAppWindow(TRUE);
            w.setCloseGadget(TRUE);
            w.setDepthGadget(TRUE);
            w.setSizeGadget(TRUE);
            if (menustrip != nullptr) {
                w.setMenustrip(menustrip);
            }
            w.setID(id);
            w.build();
            return w;
        }

        static Text createText(std::string& contents, std::string& preParse) {
            Text t{};
            t.setContents(contents);
            if (preParse.length() > 0) {
                t.setPreParse(preParse);
            }
            t.build();
            return t;
        }

        static String createString(std::string& contents, int len, std::string& accept) {
            String s{};
            s.setMaxLen(len);
            if (accept.length() > 0) {
                s.setAccept(accept);
            }
            s.setContents(contents);
            s.build();
            return s;
        }

        static Numericbutton createNumbericbutton(LONG min, LONG max, const std::string& format) {
            Numericbutton nb{};
            nb.setMin(min);
            nb.setMax(max);
            if (format.length() > 0) {
                nb.setFormat(format);
            }
            nb.build();
            return nb;
        }

        static Slider createSlider(LONG min, LONG max) {
            Slider s{};
            s.setMin(min);
            s.setMax(max);
            s.build();
            return s;
        }

        static Group createHorizontalGroup() {
            Group g{};
            g.setHoriz(TRUE);
            g.build();
            return g;
        }

        static Settingsgroup createSettingGroup() {
            Settingsgroup s{};
            s.setHoriz(TRUE);
            s.build();
            return s;
        }

        static Settings createSettings() {
            Settings s{};
            s.setHoriz(TRUE);
            s.build();
            return s;
        }

        static Group createVerticalGroup() {
            Group g;
            g.setHoriz(FALSE);
            g.build();
            return g;
        }

        static Zune::Virtgroup createVirtgroup() {
            Virtgroup vg{};
            vg.setFrame(MUIV_Frame_Virtual);
            vg.build();
            return vg;
        }

        static Zune::Scrollgroup createScrollgroup(Virtgroup& vg) {
            Scrollgroup sg{};
            sg.setContents(vg);
            sg.build();
            return sg;
        }

        static Zune::Knob createKnob() {
            Knob knob{};
            knob.build();
            return knob;
        }

        static Zune::Register createRegister(std::initializer_list<std::string> titles, BOOL withFrame)   {
            Register r{};
            r.setTitles(convertEntiryList(titles));
            r.setFrameOn(withFrame);
            r.build();
            return r;
        }

        static Zune::Prop createProp(LONG entries, BOOL isSlider, BOOL useWinBorder) {
            Prop p{};
            p.setUseWinBorder(useWinBorder);
            p.setEntries(entries);
            p.setSlider(isSlider);
            p.setVisible(true);
            p.build();
            return p;
        }

        static Zune::Scrollbar createScrollbar(LONG position) {
            Scrollbar s{};
            s.setScrollbarType(position);
            s.build();
            return s;
        }

        static Zune::Text createButton(const std::string& label) {
            return Text{MUI_MakeObject(MUIO_Button, (IPTR) label.c_str())};
        }

        static Zune::Image createCheckmark(const std::string& label) {
            return Image{MUI_MakeObject(MUIO_Checkmark, (IPTR) label.c_str())};
        }

        static Zune::Balance createBalance(BOOL quiet) {
            Balance balance{};
            balance.setQuiet(quiet);
            balance.build();
            return balance;
        }

        static Zune::Scale createScale(BOOL horizontal) {
            Scale scale{};
            scale.setHoriz(horizontal);
            scale.build();
            return scale;
        }

        static Zune::Cycle creatCycle(const std::string& label, std::initializer_list<std::string> &entry_list) {
            Object *object = MUI_MakeObject(MUIO_Cycle, (IPTR) label.c_str(), (IPTR) convertEntiryList(entry_list));
            Cycle c;
            c.setObject(object);
            return c;
        }

        static Zune::Radio createRadio(std::initializer_list<std::string> entries, BOOL horizontal) {
            Radio r{};
            r.setEntries(convertEntiryList(entries));
            r.setHoriz(horizontal);
            r.build();
            return r;
        }

        private:
            static STRPTR* convertEntiryList(std::initializer_list<std::string> &entry_list) {
                char** entries = new char*[entry_list.size() + 1];
                int i = 0;
                for (const auto& val : entry_list) {
                    entries[i] = new char[val.length() + 1];
                    strcpy(entries[i], val.c_str());
                    i++;
                }
                entries[i] = nullptr;
                return entries;
            }

    };
}

#endif
