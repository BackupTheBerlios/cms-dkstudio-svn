#ifndef _CMSCMDSTRUCT_H
#define _CMSCMDSTRUCT_H
struct CMDSTRUCT{
	int            MenuID;
	const wxChar   *MenuName;
	const wxChar   *MenuText;
	const wxChar   *MenuKey;
	wxItemKind     kind;
	const wxBitmap MenuBitmapTrue;
	const wxBitmap MenuBitmapFalse;
	wxMenu         **MenuPtr;
};
#endif