/***************************************************************
 * Name:      code_genApp.cpp
 * Purpose:   Code for Application Class
 * Author:    arcsin (arcsin@online.ua)
 * Created:   2013-11-29
 * Copyright: arcsin ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "code_genApp.h"
#include "code_genMain.h"
#include "GUIFrame.h"

IMPLEMENT_APP(code_genApp);

bool code_genApp::OnInit()
{
    code_genFrame* frame = new code_genFrame(0L);

    frame->Show();

    return true;
}
