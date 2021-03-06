//---------------------------------------------------------------------------
//
// Name:        CMSFrm.h
// Author:      DK
// Created:     2007/12/22 �U�� 10:50:21
// Description: CMSFrm class declaration
//
//---------------------------------------------------------------------------

#ifndef __CMSFRM_h__
#define __CMSFRM_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/statusbr.h>
#include <wx/aui/aui.h>
////Header Include End

////Dialog Style Start
#undef CMSFrm_STYLE
#define CMSFrm_STYLE wxCAPTION | wxRESIZE_BORDER | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class CMSFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		CMSFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("CMS"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = CMSFrm_STYLE);
		virtual ~CMSFrm();
		
		
		
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start

		wxAuiManager m_mgr;
		wxMenuBar *WxMenuBar1;
		wxToolBar *WxToolBar1;
		wxStatusBar *WxStatusBar1;
		////GUI Control Declaration End
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXSTATUSBAR = 1,
			ID_WXTOOLBAR,
			ID_MENU_CLOSE,

			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};
		
	private:
		void CreateGUIControls();
		void UnGUIControls();
		void OnClose(wxCloseEvent& event);
		void CloseClick(wxCommandEvent& event);
		
		
};

#endif
