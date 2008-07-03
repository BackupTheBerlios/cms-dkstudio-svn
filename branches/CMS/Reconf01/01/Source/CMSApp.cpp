//---------------------------------------------------------------------------
//
// Name:        CMSApp.cpp
// Author:      DK
// Created:     2007/12/22 ¤U¤È 10:50:21
// Description: 
//
//---------------------------------------------------------------------------

#include "CMSApp.h"
#include "CMSFrm.h"
#include <wx/filename.h>

IMPLEMENT_APP(CMSFrmApp)

bool CMSFrmApp::OnInit()
{
    m_locale = new wxLocale(wxLANGUAGE_CHINESE_TRADITIONAL);
	m_locale->AddCatalogLookupPathPrefix(wxT("LANG/"));
	m_locale->AddCatalog(wxT("CMSFrm"));
    CMSFrm* frame = new CMSFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int CMSFrmApp::OnExit()
{
	return 0;
}
