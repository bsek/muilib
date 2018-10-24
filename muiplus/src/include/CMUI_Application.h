#ifndef CMUI_APPLICATION_H
#define	CMUI_APPLICATION_H

#include "CMUI_Notify.h"
#include "CMUI_Window.h"
#include <rexx/storage.h>

class CMUI_Application : public CMUI_Notify
{
public:
	CMUI_Application(CMUI_Window &initialWindow);
	CMUI_Application (Object * obj);

	CMUI_Application & operator = (Object * obj);

	void addWindow (Object *window);
	void removeWindow (Object *window);
	BOOL active () const;
	void setActive (BOOL value);
	STRPTR author () const;
	STRPTR base () const;
	CxObj * broker () const;
	struct Hook * brokerHook () const;
	void setBrokerHook (struct Hook * value);
	struct MsgPort * brokerPort () const;
	LONG brokerPri () const;
	struct MUI_Command * commands () const;
	void setCommands (struct MUI_Command * value);
	STRPTR copyright () const;
	STRPTR description () const;
	struct DiskObject * diskObject () const;
	void setDiskObject (struct DiskObject * value);
	BOOL doubleStart () const;
	void setDropObject (Object * value);
	BOOL forceQuit () const;
	STRPTR helpFile () const;
	void setHelpFile (STRPTR value);
	BOOL iconified () const;
	void setIconified (BOOL value);
	IPTR menuAction () const;
	IPTR menuHelp () const;
	struct Hook * rexxHook () const;
	void setRexxHook (struct Hook * value);
	struct RxMsg * rexxMsg () const;
	void setRexxString (STRPTR value);
	void setSleep (BOOL value);
	STRPTR title () const;
	STRPTR version () const;
	struct List * windowList () const;
	IPTR aboutMUI (Object * refwindow);
	IPTR addInputHandler (struct MUI_InputHandlerNode * ihnode);
	IPTR checkRefresh ();
	IPTR inputBuffered ();
	IPTR load (STRPTR name);
	IPTR newInput (ULONG * signal);
	IPTR openConfigWindow (IPTR flags);
	IPTR pushMethod (Object * dest, std::vector<IPTR> count);
	IPTR remInputHandler (struct MUI_InputHandlerNode * ihnode);
	IPTR returnId (IPTR retid);
	IPTR save (STRPTR name);
	IPTR setConfigItem(IPTR item, IPTR data);
	IPTR showHelp(Object *window, char *name, char *node, LONG line);

protected:
	CMUI_Application();
};
#endif

