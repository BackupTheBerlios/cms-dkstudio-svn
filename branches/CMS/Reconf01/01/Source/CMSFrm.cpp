//---------------------------------------------------------------------------
//
// Name:        CMSFrm.cpp
// Author:      DK
// Created:     2007/12/22 �U�� 10:50:21
// Description: CMSFrm class implementation
//
//---------------------------------------------------------------------------

#include "CMSFrm.h"

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

	WxMenuBar1 = new wxMenuBar();

	WxStatusBar1 = new wxStatusBar(this, ID_WXSTATUSBAR1);
	WxStatusBar1->SetStatusText(wxT("Ready"), 0);
	WxToolBar1 = new wxToolBar(this, ID_WXTOOLBAR1);
	WxToolBar1->SetFont(wxFont(9, wxSWISS, wxNORMAL,wxNORMAL, false, wxT("�s�ө���")));

	//WxToolBar1->Realize();
	//SetToolBar(WxToolBar1);
	SetStatusBar(WxStatusBar1);
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
