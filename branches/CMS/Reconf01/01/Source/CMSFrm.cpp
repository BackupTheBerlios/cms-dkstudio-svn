//---------------------------------------------------------------------------
//
// Name:        CMSFrm.cpp
// Author:      DK
// Created:     2007/12/22 下午 10:50:21
// Description: CMSFrm class implementation
//
//---------------------------------------------------------------------------

#include "CMSFrm.h"
#include "../Images/note_edit.xpm"
//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// CMSFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(CMSFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(CMSFrm::OnClose)
	EVT_MENU(ID_MNU_CLOSE_3, CMSFrm::Mnuclose3Click)
END_EVENT_TABLE()
////Event Table End

CMSFrm::CMSFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

CMSFrm::~CMSFrm()
{
}

void CMSFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxStatusBar1 = new wxStatusBar(this, ID_WXSTATUSBAR1);

	WxToolBar1 = new wxToolBar(this, ID_WXTOOLBAR1, wxPoint(0,0), wxSize(312,30));
	WxToolBar1->SetFont(wxFont(9, wxSWISS, wxNORMAL,wxNORMAL, false, wxT("新細明體")));
	wxBitmap note_edit(note_edit_xpm);
	WxToolBar1->SetToolBitmapSize(wxSize(24,24));
	WxToolBar1->AddTool(ID_MNU_CLOSE_3, note_edit, wxT("note_edit"));
	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_CLOSE_3_Mnu_Obj = new wxMenu(0);
	wxMenuItem* mItem= new wxMenuItem(ID_MNU_CLOSE_3_Mnu_Obj, ID_MNU_CLOSE_3, wxT("note_edit"));
	mItem->SetBitmaps(note_edit);
	ID_MNU_CLOSE_3_Mnu_Obj->Append(mItem);
	WxMenuBar1->Append(ID_MNU_CLOSE_3_Mnu_Obj, wxT("File"));
	SetMenuBar(WxMenuBar1);

	WxToolBar1->Realize();
	SetStatusBar(WxStatusBar1);
	SetToolBar(WxToolBar1);
	SetTitle(wxT("CMS"));
	SetIcon(wxIcon(wxT("logo")));
	SetSize(8,8,320,350);
	Center();
	
	////GUI Items Creation End
}

void CMSFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Mnuclose3Click
 */
void CMSFrm::Mnuclose3Click(wxCommandEvent& event)
{
    Close(false);
	// insert your code here
}

