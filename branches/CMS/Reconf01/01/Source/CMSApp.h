//---------------------------------------------------------------------------
//
// Name:        CMSApp.h
// Author:      DK
// Created:     2007/12/22 ¤U¤È 10:50:21
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __CMSFRMApp_h__
#define __CMSFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class CMSFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
