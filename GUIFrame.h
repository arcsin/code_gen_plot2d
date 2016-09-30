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
#include <wx/choice.h>
#include <wx/spinctrl.h>
#include <wx/bmpbuttn.h>
#include <wx/notebook.h>
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
		wxButton* m_button8;
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
		wxPanel* m_panel3;
		wxCheckBox* m_chckBox_title;
		wxTextCtrl* m_txtCtrl_title;
		wxCheckBox* m_chckBox_labelx;
		wxTextCtrl* m_txtCtrl_labelx;
		wxCheckBox* m_chckBox_labely;
		wxTextCtrl* m_txtCtrl_labely;
		wxGrid* m_grd_label;
		wxPanel* m_panel2;
		wxCheckBox* m_chckBox_legendHide;
		wxCheckBox* m_chck_color_separate;
		wxCheckBox* m_chckBox_legend;
		wxCheckBox* m_chck_type_points_separate;
		wxGrid* m_grd_style;
		wxPanel* m_panel5;
		wxRadioBox* m_rdb_axes;
		wxRadioBox* m_rdb_grid2d;
		wxRadioBox* m_rdb_same_xy;
		wxCheckBox* m_chck_xtics;
		wxStaticText* m_staticText12;
		wxTextCtrl* m_txt_xtics_start;
		wxStaticText* m_staticText111;
		wxTextCtrl* m_txt_xtics_step;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_txt_xtics_finish;
		wxCheckBox* m_chck_ytics;
		wxStaticText* m_staticText121;
		wxTextCtrl* m_txt_ytics_start;
		wxStaticText* m_staticText1111;
		wxTextCtrl* m_txt_ytics_step;
		wxStaticText* m_staticText131;
		wxTextCtrl* m_txt_ytics_finish;
		wxCheckBox* m_chck_yx_ratio;
		wxTextCtrl* m_txt_yx_ratio;
		wxStaticText* m_staticText23;
		wxCheckBox* m_chck_nticks;
		wxTextCtrl* m_txt_nticks;
		wxCheckBox* m_chck_adapt_depth;
		wxTextCtrl* m_txt_adapt_depth;
		wxPanel* m_panel6;
		wxStaticText* m_staticText11;
		wxChoice* m_choice1;
		wxRadioBox* m_rdb_box;
		wxCheckBox* m_checkBox29;
		wxSpinCtrl* m_spinCtrl2;
		wxStaticText* m_staticText112;
		wxSpinCtrl* m_spinCtrl3;
		wxCheckBox* m_checkBox23;
		wxChoice* m_choice2;
		wxCheckBox* m_chckBox_inline;
		wxCheckBox* m_chck_out_file;
		wxTextCtrl* m_txt_out_file;
		wxBitmapButton* m_btm_select_out_file;
		wxPanel* m_panel4;
		wxCheckBox* m_chckGPtitle;
		wxTextCtrl* m_txtGPtitle;
		wxCheckBox* m_chckGPlegend_interval;
		wxTextCtrl* m_txtGPlegend_interval;
		wxCheckBox* m_chckGPlegend_in_box;
		wxCheckBox* m_chckGPlegend_outside;
		wxRadioBox* m_radGPlegend_position;
		wxCheckBox* m_chckGPencoding;
		wxChoice* m_choiceGPencoding;
		wxCheckBox* m_chckGPxtics;
		wxStaticText* m_staticText17;
		wxTextCtrl* m_txtGPxtics;
		wxCheckBox* m_chckGPxnomirror;
		wxCheckBox* m_chckGPytics;
		wxStaticText* m_staticText171;
		wxTextCtrl* m_txtGPytics;
		wxCheckBox* m_chckGPynomirror;
		wxCheckBox* m_chckGPmxtics;
		wxStaticText* m_staticText172;
		wxTextCtrl* m_txtGPmxtics;
		wxCheckBox* chckGPmytics;
		wxStaticText* m_staticText1721;
		wxTextCtrl* m_txtGPmytics;
		wxCheckBox* m_chcklogx;
		wxCheckBox* m_chckGPlogy;
		wxCheckBox* m_chckGPpolar;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Apply;
		wxButton* m_sdbSizer1Cancel;
		wxTextCtrl* m_textCtrl13;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnGenerate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGenerate( wxGridEvent& event ) { event.Skip(); }
		virtual void OnGenerate( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnFileBrowse( wxCommandEvent& event ) { event.Skip(); }
		virtual void Quit( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("plot2d MegaWizard"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 988,600 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~GUIFrame();
	
};

#endif //__GUIFrame__
