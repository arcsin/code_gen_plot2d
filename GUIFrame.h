///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 29 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFrame__
#define __GUIFrame__

#include <wx/string.h>
#include <wx/listbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/grid.h>
#include <wx/radiobox.h>
#include <wx/spinctrl.h>
#include <wx/notebook.h>
#include <wx/choice.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame 
{
	private:
	
	protected:
		wxNotebook* m_notebook1;
		wxPanel* m_panel1;
		wxListBox* m_lstBox_expression;
		wxButton* m_button1;
		wxButton* m_button2;
		wxButton* m_button3;
		wxButton* m_button6;
		wxButton* m_button7;
		wxButton* m_button4;
		wxCheckBox* m_chckBox_angle;
		wxTextCtrl* m_txtCtrl_angle;
		wxStaticText* m_staticText21;
		wxTextCtrl* m_txtCtrl_angle1;
		wxStaticText* m_staticText31;
		wxTextCtrl* m_txtCtrl_angle2;
		wxCheckBox* m_chckBox_abscissa;
		wxTextCtrl* m_txtCtrl_abscissa;
		wxStaticText* m_staticText2;
		wxTextCtrl* m_txtCtrl_abscissa1;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_txtCtrl_abscissa2;
		wxCheckBox* m_chckBox_abscissaLog;
		wxCheckBox* m_chckBox_ordinate;
		wxTextCtrl* m_txtCtrl_ordinate;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_txtCtrl_ordinate1;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_txtCtrl_ordinate2;
		wxCheckBox* m_chckBox_ordinateLog;
		wxCheckBox* m_chckBox_nticks;
		wxTextCtrl* m_txtCtrl_ordinate3;
		wxCheckBox* m_checkBox_adaptdepth2;
		wxTextCtrl* m_txtCtrl_ordinate11;
		wxPanel* m_panel2;
		wxGrid* m_grd_style;
		wxPanel* m_panel3;
		wxCheckBox* m_chckBox_title;
		wxTextCtrl* m_txtCtrl_title;
		wxCheckBox* m_chckBox_labelx;
		wxTextCtrl* m_txtCtrl_labelx;
		wxCheckBox* m_chckBox_labely;
		wxTextCtrl* m_txtCtrl_labely;
		wxCheckBox* m_chckBox_legendHide;
		wxCheckBox* m_chckBox_legend;
		wxGrid* m_grd_label;
		wxPanel* m_panel4;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl11;
		wxRadioBox* m_radioBox1;
		wxCheckBox* m_checkBox4;
		wxSpinCtrl* m_spinCtrl1;
		wxCheckBox* m_checkBox5;
		wxCheckBox* m_checkBox6;
		wxButton* m_button5;
		wxStaticText* m_staticText11;
		wxChoice* m_choice1;
		wxCheckBox* m_chckBox_inline;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Apply;
		wxButton* m_sdbSizer1Cancel;
		wxTextCtrl* m_textCtrl13;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnGenerate( wxCommandEvent& event ) { event.Skip(); }
		virtual void Quit( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("wxWidgets Application Template"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~GUIFrame();
	
};

#endif //__GUIFrame__
