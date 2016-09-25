/***************************************************************
 * Name:      code_genMain.h
 * Purpose:   Defines Application Frame
 * Author:    arcsin (arcsin@online.ua)
 * Created:   2013-11-29
 * Copyright: arcsin ()
 * License:
 **************************************************************/

#ifndef CODE_GENMAIN_H
#define CODE_GENMAIN_H



#include "code_genApp.h"


#include "GUIFrame.h"

class code_genFrame: public GUIFrame
{
    public:
        code_genFrame(wxFrame *frame);
        ~code_genFrame();

    private:
        virtual void OnClose(wxCloseEvent& event);
        virtual void OnQuit(wxCommandEvent& event);
        virtual void OnGenerate(wxCommandEvent& event);
        virtual void OnGenerate(wxGridEvent& event);
        virtual void Generate();

};

#endif // CODE_GENMAIN_H
