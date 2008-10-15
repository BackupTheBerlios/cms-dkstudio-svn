//---------------------------------------------------------------------------
//
// Name:        CMSFrm.cpp
// Author:      DK
// Created:     2007/12/22 下午 10:50:21
// Description: CMSFrm class implementation
//
//---------------------------------------------------------------------------

#include "CMSFrm.h"
#include "Command/CmsCmdStruct.h"
#include <wx/dnd.h>
#include "../Images/note_edit.xpm"
#include "../Images/exit.xpm"
#include "../Images/exit_b.xpm"
//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//#define _(s)    wxT(s)

//----------------------------------------------------------------------------
// CMSFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(CMSFrm,wxFrame)
	////Manual Code Start
	EVT_CLOSE(CMSFrm::OnClose)
	EVT_MENU(ID_MENU_CLOSE, CMSFrm::CloseClick)
	////Manual Code End
END_EVENT_TABLE()
////Event Table End


CMSFrm::CMSFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

CMSFrm::~CMSFrm()
{
	UnGUIControls();
}

void CMSFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	const wxBitmap note_edit(note_edit_xpm,wxBITMAP_TYPE_XPM);
	const wxBitmap exit(exit_xpm,wxBITMAP_TYPE_XPM);
	const wxBitmap exit_b(exit_b_xpm,wxBITMAP_TYPE_XPM);

	
	WxStatusBar1 = new wxStatusBar(this, ID_WXSTATUSBAR);

	
	
	//wxToolBar* WxToolBar1 = new wxToolBar(this, ID_WXTOOLBAR_2, wxPoint(0,0), wxSize(312,30));
	//WxToolBar1->SetFont(wxFont(9, wxSWISS, wxNORMAL,wxNORMAL, false, wxT("新細明體")));

	//wxAuiNotebook* m_Notebook = new wxAuiNotebook(this, ID_NOTEBOOK_4, wxPoint(0,29),wxSize(392,320), wxWANTS_CHARS |wxAUI_NB_TOP|wxAUI_NB_TAB_SPLIT|wxAUI_NB_TAB_MOVE|wxAUI_NB_SCROLL_BUTTONS|wxAUI_NB_WINDOWLIST_BUTTON|wxAUI_NB_CLOSE_ON_ACTIVE_TAB);
	//m_Notebook->wxControl::SetWindowStyleFlag(m_Notebook->wxControl::GetWindowStyleFlag() & ~wxTAB_TRAVERSAL);
	//m_Notebook->SetDropTarget();
	//m_Notebook->SetArtProvider(new wxAuiSimpleTabArt);

	//CMDSTRUCT CMDMenu={ID_MNU_CLOSE_3,_("Exit"),_("Exit CMS"),wxT("Ctrl+S"),wxITEM_NORMAL,exit,exit_b,0};

	//WxToolBar1->SetToolBitmapSize(wxSize(16,16));
	//WxToolBar1->AddTool(ID_MNU_CLOSE_3, exit, _("Exit CMS"),wxGetTranslation(CMDMenu.MenuText));	
	
	//wxMenu *Menu1 = new wxMenu(0);
	//wxMenuItem* mItem= new wxMenuItem(Menu1, CMDMenu.MenuID, CMDMenu.MenuName,wxGetTranslation(CMDMenu.MenuText));
	//mItem->SetBitmaps(CMDMenu.MenuBitmapTrue);
	//Menu1->Append(mItem);
	//WxMenuBar1 = new wxMenuBar();
	//WxMenuBar1->Append(Menu1, _("File"));
	//SetMenuBar(WxMenuBar1);
	//m_mgr

	//WxToolBar1->Realize();
	
	m_mgr.SetManagedWindow(this);
	wxTextCtrl* text1 = new wxTextCtrl(this, -1);
	m_mgr.AddPane(text1, wxLEFT, wxT("Pane Caption"));
	m_mgr.Update();
	SetStatusBar(WxStatusBar1);
	//SetToolBar(WxToolBar1);
	SetTitle(wxT("CMS"));
	SetIcon(wxIcon(wxT("logo")));
	SetSize(8,8,320,350);
	//Center();
	
	////GUI Items Creation End
}

void CMSFrm::UnGUIControls()
{
	m_mgr.UnInit();
}

void CMSFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * Mnuclose3Click
 */
void CMSFrm::CloseClick(wxCommandEvent& event)
{
    Close(false);
	// insert your code here
}