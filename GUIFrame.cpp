///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jan 29 2014)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wx/wxprec.h"

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif //WX_PRECOMP

#include "GUIFrame.h"

///////////////////////////////////////////////////////////////////////////

GUIFrame::GUIFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel1 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	m_lstBox_expression = new wxListBox( m_panel1, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_lstBox_expression->Append( wxT("sin(x)") );
	m_lstBox_expression->Append( wxT("[parametric, sin(t), cos(t), [t, -6, 6]]") );
	m_lstBox_expression->Append( wxT("['parametric, cos(t), sin(2*t), [t, -%pi, %pi], [nticks, 300]]") );
	m_lstBox_expression->Append( wxT("[discrete,[0,3,6,4,6,3,0,2,0],[0,2,0,3,6,4,6,3,0]]") );
	m_lstBox_expression->Append( wxT("[discrete,[[3,1],[5,3],[3,5],[1,3],[3,1]]]") );
	bSizer3->Add( m_lstBox_expression, 3, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_button1 = new wxButton( m_panel1, wxID_ANY, wxT("Add Simple"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button1, 0, wxALL, 5 );
	
	m_button2 = new wxButton( m_panel1, wxID_ANY, wxT("Add Parametric"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button2, 0, wxALL, 5 );
	
	m_button3 = new wxButton( m_panel1, wxID_ANY, wxT("Add Discret"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button3, 0, wxALL, 5 );
	
	m_button8 = new wxButton( m_panel1, wxID_ANY, wxT("Edit"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button8, 0, wxALL, 5 );
	
	m_button6 = new wxButton( m_panel1, wxID_ANY, wxT("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button6, 0, wxALL, 5 );
	
	m_button7 = new wxButton( m_panel1, wxID_ANY, wxT("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button7, 0, wxALL, 5 );
	
	m_button4 = new wxButton( m_panel1, wxID_ANY, wxT("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button4, 0, wxALL, 5 );
	
	bSizer3->Add( bSizer5, 1, wxEXPAND, 5 );
	
	bSizer2->Add( bSizer3, 5, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox_angle = new wxCheckBox( m_panel1, wxID_ANY, wxT("angle/param:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( m_chckBox_angle, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_angle = new wxTextCtrl( m_panel1, wxID_ANY, wxT("phi"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( m_txtCtrl_angle, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText21 = new wxStaticText( m_panel1, wxID_ANY, wxT("From"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer61->Add( m_staticText21, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_angle1 = new wxTextCtrl( m_panel1, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( m_txtCtrl_angle1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText31 = new wxStaticText( m_panel1, wxID_ANY, wxT("To"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer61->Add( m_staticText31, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_angle2 = new wxTextCtrl( m_panel1, wxID_ANY, wxT("2*%pi"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer61->Add( m_txtCtrl_angle2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer2->Add( bSizer61, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox_abscissa = new wxCheckBox( m_panel1, wxID_ANY, wxT("abscissa:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chckBox_abscissa->SetValue(true); 
	bSizer6->Add( m_chckBox_abscissa, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_abscissa = new wxTextCtrl( m_panel1, wxID_ANY, wxT("x"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_txtCtrl_abscissa, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText2 = new wxStaticText( m_panel1, wxID_ANY, wxT("From"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer6->Add( m_staticText2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_abscissa1 = new wxTextCtrl( m_panel1, wxID_ANY, wxT("-5"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_txtCtrl_abscissa1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText3 = new wxStaticText( m_panel1, wxID_ANY, wxT("To"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer6->Add( m_staticText3, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_abscissa2 = new wxTextCtrl( m_panel1, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_txtCtrl_abscissa2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chckBox_abscissaLog = new wxCheckBox( m_panel1, wxID_ANY, wxT("log"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_chckBox_abscissaLog, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer2->Add( bSizer6, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox_ordinate = new wxCheckBox( m_panel1, wxID_ANY, wxT("ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_chckBox_ordinate, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_ordinate = new wxTextCtrl( m_panel1, wxID_ANY, wxT("y"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_txtCtrl_ordinate, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText5 = new wxStaticText( m_panel1, wxID_ANY, wxT("From"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer8->Add( m_staticText5, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_ordinate1 = new wxTextCtrl( m_panel1, wxID_ANY, wxT("-5"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_txtCtrl_ordinate1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText6 = new wxStaticText( m_panel1, wxID_ANY, wxT("To"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer8->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtCtrl_ordinate2 = new wxTextCtrl( m_panel1, wxID_ANY, wxT("5"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_txtCtrl_ordinate2, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chckBox_ordinateLog = new wxCheckBox( m_panel1, wxID_ANY, wxT("log"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_chckBox_ordinateLog, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer2->Add( bSizer8, 0, wxEXPAND, 5 );
	
	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	bSizer2->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, wxT("General"), false );
	m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer34;
	bSizer34 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox_title = new wxCheckBox( m_panel3, wxID_ANY, wxT("Title:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chckBox_title->SetValue(true); 
	bSizer34->Add( m_chckBox_title, 0, wxALL, 5 );
	
	m_txtCtrl_title = new wxTextCtrl( m_panel3, wxID_ANY, wxT("Figure 1.2: Test "), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer34->Add( m_txtCtrl_title, 1, wxALL|wxEXPAND, 5 );
	
	bSizer7->Add( bSizer34, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox_labelx = new wxCheckBox( m_panel3, wxID_ANY, wxT("Label x:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chckBox_labelx->SetValue(true); 
	bSizer35->Add( m_chckBox_labelx, 0, wxALL, 5 );
	
	m_txtCtrl_labelx = new wxTextCtrl( m_panel3, wxID_ANY, wxT("Label x"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer35->Add( m_txtCtrl_labelx, 1, wxALL|wxEXPAND, 5 );
	
	bSizer7->Add( bSizer35, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer36;
	bSizer36 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox_labely = new wxCheckBox( m_panel3, wxID_ANY, wxT("Label y:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chckBox_labely->SetValue(true); 
	bSizer36->Add( m_chckBox_labely, 0, wxALL, 5 );
	
	m_txtCtrl_labely = new wxTextCtrl( m_panel3, wxID_ANY, wxT("Label y"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer36->Add( m_txtCtrl_labely, 1, wxALL|wxEXPAND, 5 );
	
	bSizer7->Add( bSizer36, 0, wxEXPAND, 5 );
	
	m_grd_label = new wxGrid( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_grd_label->CreateGrid( 8, 3 );
	m_grd_label->EnableEditing( true );
	m_grd_label->EnableGridLines( true );
	m_grd_label->EnableDragGridSize( false );
	m_grd_label->SetMargins( 0, 0 );
	
	// Columns
	m_grd_label->SetColSize( 0, 275 );
	m_grd_label->EnableDragColMove( false );
	m_grd_label->EnableDragColSize( true );
	m_grd_label->SetColLabelSize( 30 );
	m_grd_label->SetColLabelValue( 0, wxT("label") );
	m_grd_label->SetColLabelValue( 1, wxT("X") );
	m_grd_label->SetColLabelValue( 2, wxT("Y") );
	m_grd_label->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grd_label->EnableDragRowSize( true );
	m_grd_label->SetRowLabelSize( 80 );
	m_grd_label->SetRowLabelValue( 0, wxT("line1") );
	m_grd_label->SetRowLabelValue( 1, wxT("line2") );
	m_grd_label->SetRowLabelValue( 2, wxT("line3") );
	m_grd_label->SetRowLabelValue( 3, wxT("line4") );
	m_grd_label->SetRowLabelValue( 4, wxT("line5") );
	m_grd_label->SetRowLabelValue( 5, wxT("line6") );
	m_grd_label->SetRowLabelValue( 6, wxT("line7") );
	m_grd_label->SetRowLabelValue( 7, wxT("line8") );
	m_grd_label->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grd_label->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer7->Add( m_grd_label, 1, wxALL|wxEXPAND, 5 );
	
	m_panel3->SetSizer( bSizer7 );
	m_panel3->Layout();
	bSizer7->Fit( m_panel3 );
	m_notebook1->AddPage( m_panel3, wxT("Text"), false );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxVERTICAL );
	
	wxGridSizer* gSizer1;
	gSizer1 = new wxGridSizer( 2, 2, 0, 0 );
	
	m_chckBox_legendHide = new wxCheckBox( m_panel2, wxID_ANY, wxT("Legend hide"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chckBox_legendHide->SetValue(true); 
	gSizer1->Add( m_chckBox_legendHide, 0, wxALL, 5 );
	
	m_chck_color_separate = new wxCheckBox( m_panel2, wxID_ANY, wxT("Color separate"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_chck_color_separate, 0, wxALL, 5 );
	
	m_chckBox_legend = new wxCheckBox( m_panel2, wxID_ANY, wxT("Legend"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chckBox_legend->SetValue(true); 
	gSizer1->Add( m_chckBox_legend, 0, wxALL, 5 );
	
	m_chck_type_points_separate = new wxCheckBox( m_panel2, wxID_ANY, wxT("Type points separate"), wxDefaultPosition, wxDefaultSize, 0 );
	gSizer1->Add( m_chck_type_points_separate, 0, wxALL, 5 );
	
	bSizer81->Add( gSizer1, 1, wxEXPAND, 5 );
	
	m_grd_style = new wxGrid( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_grd_style->CreateGrid( 8, 6 );
	m_grd_style->EnableEditing( true );
	m_grd_style->EnableGridLines( true );
	m_grd_style->EnableDragGridSize( false );
	m_grd_style->SetMargins( 0, 0 );
	
	// Columns
	m_grd_style->SetColSize( 0, 190 );
	m_grd_style->SetColSize( 1, 90 );
	m_grd_style->SetColSize( 2, 70 );
	m_grd_style->SetColSize( 3, 60 );
	m_grd_style->SetColSize( 4, 60 );
	m_grd_style->SetColSize( 5, 60 );
	m_grd_style->EnableDragColMove( false );
	m_grd_style->EnableDragColSize( true );
	m_grd_style->SetColLabelSize( 30 );
	m_grd_style->SetColLabelValue( 0, wxT("Legend") );
	m_grd_style->SetColLabelValue( 1, wxT("Style") );
	m_grd_style->SetColLabelValue( 2, wxT("Color") );
	m_grd_style->SetColLabelValue( 3, wxT("Width") );
	m_grd_style->SetColLabelValue( 4, wxT("Type") );
	m_grd_style->SetColLabelValue( 5, wxT("Size") );
	m_grd_style->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grd_style->SetRowSize( 0, 25 );
	m_grd_style->SetRowSize( 1, 25 );
	m_grd_style->SetRowSize( 2, 25 );
	m_grd_style->SetRowSize( 3, 25 );
	m_grd_style->SetRowSize( 4, 25 );
	m_grd_style->SetRowSize( 5, 25 );
	m_grd_style->SetRowSize( 6, 25 );
	m_grd_style->SetRowSize( 7, 25 );
	m_grd_style->EnableDragRowSize( true );
	m_grd_style->SetRowLabelSize( 35 );
	m_grd_style->SetRowLabelValue( 0, wxT("1") );
	m_grd_style->SetRowLabelValue( 1, wxT("2") );
	m_grd_style->SetRowLabelValue( 2, wxT("3") );
	m_grd_style->SetRowLabelValue( 3, wxT("4") );
	m_grd_style->SetRowLabelValue( 4, wxT("5") );
	m_grd_style->SetRowLabelValue( 5, wxT("6") );
	m_grd_style->SetRowLabelValue( 6, wxT("7") );
	m_grd_style->SetRowLabelValue( 7, wxT("8") );
	m_grd_style->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grd_style->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer81->Add( m_grd_style, 6, wxEXPAND, 5 );
	
	m_panel2->SetSizer( bSizer81 );
	m_panel2->Layout();
	bSizer81->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, wxT("Style"), false );
	m_panel5 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxVERTICAL );
	
	wxString m_rdb_axesChoices[] = { wxT("default"), wxT("false"), wxT("solid"), wxT("true") };
	int m_rdb_axesNChoices = sizeof( m_rdb_axesChoices ) / sizeof( wxString );
	m_rdb_axes = new wxRadioBox( m_panel5, wxID_ANY, wxT("Axes"), wxDefaultPosition, wxDefaultSize, m_rdb_axesNChoices, m_rdb_axesChoices, 1, wxRA_SPECIFY_ROWS );
	m_rdb_axes->SetSelection( 0 );
	bSizer19->Add( m_rdb_axes, 0, wxALL|wxEXPAND, 5 );
	
	wxString m_rdb_grid2dChoices[] = { wxT("default"), wxT("false"), wxT("true") };
	int m_rdb_grid2dNChoices = sizeof( m_rdb_grid2dChoices ) / sizeof( wxString );
	m_rdb_grid2d = new wxRadioBox( m_panel5, wxID_ANY, wxT("grid2d"), wxDefaultPosition, wxDefaultSize, m_rdb_grid2dNChoices, m_rdb_grid2dChoices, 1, wxRA_SPECIFY_ROWS );
	m_rdb_grid2d->SetSelection( 0 );
	bSizer19->Add( m_rdb_grid2d, 0, wxALL|wxEXPAND, 5 );
	
	wxString m_rdb_same_xyChoices[] = { wxT("default"), wxT("false"), wxT("true") };
	int m_rdb_same_xyNChoices = sizeof( m_rdb_same_xyChoices ) / sizeof( wxString );
	m_rdb_same_xy = new wxRadioBox( m_panel5, wxID_ANY, wxT("same_xy (equal of axes)"), wxDefaultPosition, wxDefaultSize, m_rdb_same_xyNChoices, m_rdb_same_xyChoices, 1, wxRA_SPECIFY_ROWS );
	m_rdb_same_xy->SetSelection( 0 );
	bSizer19->Add( m_rdb_same_xy, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chck_xtics = new wxCheckBox( m_panel5, wxID_ANY, wxT("xtics"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_chck_xtics, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText12 = new wxStaticText( m_panel5, wxID_ANY, wxT("start:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	bSizer22->Add( m_staticText12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_xtics_start = new wxTextCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_txt_xtics_start, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText111 = new wxStaticText( m_panel5, wxID_ANY, wxT("step:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111->Wrap( -1 );
	bSizer22->Add( m_staticText111, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_xtics_step = new wxTextCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_txt_xtics_step, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText13 = new wxStaticText( m_panel5, wxID_ANY, wxT("finish:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	bSizer22->Add( m_staticText13, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_xtics_finish = new wxTextCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer22->Add( m_txt_xtics_finish, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer19->Add( bSizer22, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer221;
	bSizer221 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chck_ytics = new wxCheckBox( m_panel5, wxID_ANY, wxT("ytics"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221->Add( m_chck_ytics, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText121 = new wxStaticText( m_panel5, wxID_ANY, wxT("start:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText121->Wrap( -1 );
	bSizer221->Add( m_staticText121, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_ytics_start = new wxTextCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221->Add( m_txt_ytics_start, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText1111 = new wxStaticText( m_panel5, wxID_ANY, wxT("step:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1111->Wrap( -1 );
	bSizer221->Add( m_staticText1111, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_ytics_step = new wxTextCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221->Add( m_txt_ytics_step, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText131 = new wxStaticText( m_panel5, wxID_ANY, wxT("finish:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	bSizer221->Add( m_staticText131, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_ytics_finish = new wxTextCtrl( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer221->Add( m_txt_ytics_finish, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer19->Add( bSizer221, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer202;
	bSizer202 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chck_yx_ratio = new wxCheckBox( m_panel5, wxID_ANY, wxT("yx_ratio"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer202->Add( m_chck_yx_ratio, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_yx_ratio = new wxTextCtrl( m_panel5, wxID_ANY, wxT("1"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer202->Add( m_txt_yx_ratio, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText23 = new wxStaticText( m_panel5, wxID_ANY, wxT("(side ratio of window)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer202->Add( m_staticText23, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer19->Add( bSizer202, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer82;
	bSizer82 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chck_nticks = new wxCheckBox( m_panel5, wxID_ANY, wxT("nticks:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer82->Add( m_chck_nticks, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_nticks = new wxTextCtrl( m_panel5, wxID_ANY, wxT("300"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer82->Add( m_txt_nticks, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_chck_adapt_depth = new wxCheckBox( m_panel5, wxID_ANY, wxT("adapt_depth:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer82->Add( m_chck_adapt_depth, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_adapt_depth = new wxTextCtrl( m_panel5, wxID_ANY, wxT("2"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer82->Add( m_txt_adapt_depth, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer19->Add( bSizer82, 0, wxEXPAND, 5 );
	
	m_panel5->SetSizer( bSizer19 );
	m_panel5->Layout();
	bSizer19->Fit( m_panel5 );
	m_notebook1->AddPage( m_panel5, wxT("Axis"), false );
	m_panel6 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( m_panel6, wxID_ANY, wxT("Code style:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer14->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_choice1Choices[] = { wxT(" continuous"), wxT("hierarchical without comments"), wxT("hierarchical with comments") };
	int m_choice1NChoices = sizeof( m_choice1Choices ) / sizeof( wxString );
	m_choice1 = new wxChoice( m_panel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1NChoices, m_choice1Choices, 0 );
	m_choice1->SetSelection( 2 );
	bSizer14->Add( m_choice1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer26->Add( bSizer14, 0, wxEXPAND, 5 );
	
	wxString m_rdb_boxChoices[] = { wxT("default"), wxT("false"), wxT("true") };
	int m_rdb_boxNChoices = sizeof( m_rdb_boxChoices ) / sizeof( wxString );
	m_rdb_box = new wxRadioBox( m_panel6, wxID_ANY, wxT("Box"), wxDefaultPosition, wxDefaultSize, m_rdb_boxNChoices, m_rdb_boxChoices, 1, wxRA_SPECIFY_ROWS );
	m_rdb_box->SetSelection( 0 );
	bSizer26->Add( m_rdb_box, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chck_size = new wxCheckBox( m_panel6, wxID_ANY, wxT("size: "), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer141->Add( m_chck_size, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_spn_size_width = new wxSpinCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 9999, 500 );
	bSizer141->Add( m_spn_size_width, 0, wxALL, 5 );
	
	m_staticText112 = new wxStaticText( m_panel6, wxID_ANY, wxT("x"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText112->Wrap( -1 );
	bSizer141->Add( m_staticText112, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_spn_size_height = new wxSpinCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 9999, 400 );
	bSizer141->Add( m_spn_size_height, 0, wxALL, 5 );
	
	bSizer26->Add( bSizer141, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox23 = new wxCheckBox( m_panel6, wxID_ANY, wxT("gnuplot_term"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer27->Add( m_chckBox23, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	wxString m_choice2Choices[] = { wxT("default"), wxT("postscript"), wxT("postscript eps"), wxT("gif"), wxT("png"), wxT("jpeg"), wxT("svg"), wxT("canvas(html5)"), wxT("latex"), wxT("aifm"), wxT("dxf"), wxT("eepic"), wxT("hpgl"), wxT("dumb"), wxT("windows") };
	int m_choice2NChoices = sizeof( m_choice2Choices ) / sizeof( wxString );
	m_choice2 = new wxChoice( m_panel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice2NChoices, m_choice2Choices, 0 );
	m_choice2->SetSelection( 0 );
	bSizer27->Add( m_choice2, 0, wxALL, 5 );
	
	m_chckBox_inline = new wxCheckBox( m_panel6, wxID_ANY, wxT("inline plot"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer27->Add( m_chckBox_inline, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer26->Add( bSizer27, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer271;
	bSizer271 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chck_out_file = new wxCheckBox( m_panel6, wxID_ANY, wxT("gnuplot_out_file"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer271->Add( m_chck_out_file, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txt_out_file = new wxTextCtrl( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer271->Add( m_txt_out_file, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_btm_select_out_file = new wxBitmapButton( m_panel6, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer271->Add( m_btm_select_out_file, 0, wxALL, 5 );
	
	bSizer26->Add( bSizer271, 0, wxEXPAND, 5 );
	
	m_panel6->SetSizer( bSizer26 );
	m_panel6->Layout();
	bSizer26->Fit( m_panel6 );
	m_notebook1->AddPage( m_panel6, wxT("Output"), true );
	m_panel4 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckGPtitle = new wxCheckBox( m_panel4, wxID_ANY, wxT("Title:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_chckGPtitle, 1, wxALL, 5 );
	
	m_txtGPtitle = new wxTextCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_txtGPtitle, 5, wxALL|wxEXPAND, 5 );
	
	bSizer11->Add( bSizer17, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer181;
	bSizer181 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckGPlegend_interval = new wxCheckBox( m_panel4, wxID_ANY, wxT("legend interval"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer121->Add( m_chckGPlegend_interval, 0, wxALL|wxEXPAND, 5 );
	
	m_txtGPlegend_interval = new wxTextCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer121->Add( m_txtGPlegend_interval, 0, wxALL, 5 );
	
	bSizer13->Add( bSizer121, 0, wxEXPAND, 5 );
	
	m_chckGPlegend_in_box = new wxCheckBox( m_panel4, wxID_ANY, wxT("legend in box"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_chckGPlegend_in_box, 0, wxALL, 5 );
	
	m_chckGPlegend_outside = new wxCheckBox( m_panel4, wxID_ANY, wxT("legend outside"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_chckGPlegend_outside, 0, wxALL, 5 );
	
	bSizer181->Add( bSizer13, 1, wxEXPAND, 5 );
	
	wxString m_radGPlegend_positionChoices[] = { wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" ") };
	int m_radGPlegend_positionNChoices = sizeof( m_radGPlegend_positionChoices ) / sizeof( wxString );
	m_radGPlegend_position = new wxRadioBox( m_panel4, wxID_ANY, wxT("legend position"), wxDefaultPosition, wxDefaultSize, m_radGPlegend_positionNChoices, m_radGPlegend_positionChoices, 3, wxRA_SPECIFY_COLS|wxRA_SPECIFY_ROWS );
	m_radGPlegend_position->SetSelection( 2 );
	bSizer181->Add( m_radGPlegend_position, 1, wxALIGN_CENTER, 5 );
	
	bSizer11->Add( bSizer181, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckGPencoding = new wxCheckBox( m_panel4, wxID_ANY, wxT("encoding:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_chckGPencoding, 0, wxALL, 5 );
	
	wxString m_choiceGPencodingChoices[] = { wxT("default"), wxT("utf8"), wxT("iso_8859_1"), wxT("iso_8859_2"), wxT("iso_8859_9"), wxT("iso_8859_15"), wxT("koir8r"), wxT("koir8u"), wxT("cp437"), wxT("cp850"), wxT("cp852"), wxT("cp950"), wxT("cp1250"), wxT("cp1251"), wxT("cp1254") };
	int m_choiceGPencodingNChoices = sizeof( m_choiceGPencodingChoices ) / sizeof( wxString );
	m_choiceGPencoding = new wxChoice( m_panel4, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceGPencodingNChoices, m_choiceGPencodingChoices, 0 );
	m_choiceGPencoding->SetSelection( 0 );
	bSizer31->Add( m_choiceGPencoding, 0, wxALL, 5 );
	
	bSizer11->Add( bSizer31, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer311;
	bSizer311 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckGPxtics = new wxCheckBox( m_panel4, wxID_ANY, wxT("xtics:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer311->Add( m_chckGPxtics, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText17 = new wxStaticText( m_panel4, wxID_ANY, wxT("step:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	bSizer311->Add( m_staticText17, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtGPxtics = new wxTextCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer311->Add( m_txtGPxtics, 0, wxALL, 5 );
	
	m_chckGPxnomirror = new wxCheckBox( m_panel4, wxID_ANY, wxT("nomirror (hide up tics)"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer311->Add( m_chckGPxnomirror, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer11->Add( bSizer311, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3111;
	bSizer3111 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckGPytics = new wxCheckBox( m_panel4, wxID_ANY, wxT("ytics:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3111->Add( m_chckGPytics, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText171 = new wxStaticText( m_panel4, wxID_ANY, wxT("step:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText171->Wrap( -1 );
	bSizer3111->Add( m_staticText171, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtGPytics = new wxTextCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3111->Add( m_txtGPytics, 0, wxALL, 5 );
	
	m_chckGPynomirror = new wxCheckBox( m_panel4, wxID_ANY, wxT("nomirror (hide right tics)"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3111->Add( m_chckGPynomirror, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer11->Add( bSizer3111, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3112;
	bSizer3112 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckGPmxtics = new wxCheckBox( m_panel4, wxID_ANY, wxT("mxtics:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3112->Add( m_chckGPmxtics, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText172 = new wxStaticText( m_panel4, wxID_ANY, wxT("divide step on: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText172->Wrap( -1 );
	bSizer3112->Add( m_staticText172, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtGPmxtics = new wxTextCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3112->Add( m_txtGPmxtics, 0, wxALL, 5 );
	
	bSizer11->Add( bSizer3112, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer31121;
	bSizer31121 = new wxBoxSizer( wxHORIZONTAL );
	
	chckGPmytics = new wxCheckBox( m_panel4, wxID_ANY, wxT("mytics:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31121->Add( chckGPmytics, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText1721 = new wxStaticText( m_panel4, wxID_ANY, wxT("divide step on: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1721->Wrap( -1 );
	bSizer31121->Add( m_staticText1721, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_txtGPmytics = new wxTextCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31121->Add( m_txtGPmytics, 0, wxALL, 5 );
	
	bSizer11->Add( bSizer31121, 0, wxEXPAND, 5 );
	
	m_chcklogx = new wxCheckBox( m_panel4, wxID_ANY, wxT("log x"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_chcklogx, 0, wxALL, 5 );
	
	m_chckGPlogy = new wxCheckBox( m_panel4, wxID_ANY, wxT("log y"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_chckGPlogy, 0, wxALL, 5 );
	
	m_chckGPpolar = new wxCheckBox( m_panel4, wxID_ANY, wxT("polar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_chckGPpolar, 0, wxALL, 5 );
	
	m_panel4->SetSizer( bSizer11 );
	m_panel4->Layout();
	bSizer11->Fit( m_panel4 );
	m_notebook1->AddPage( m_panel4, wxT("Gnuplot preamble"), false );
	
	bSizer1->Add( m_notebook1, 10, wxEXPAND | wxALL, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Apply = new wxButton( this, wxID_APPLY );
	m_sdbSizer1->AddButton( m_sdbSizer1Apply );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();
	bSizer1->Add( m_sdbSizer1, 1, wxEXPAND, 5 );
	
	bSizer18->Add( bSizer1, 1, wxEXPAND, 5 );
	
	m_textCtrl13 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_MULTILINE|wxTE_READONLY );
	bSizer18->Add( m_textCtrl13, 1, wxALL|wxEXPAND, 5 );
	
	this->SetSizer( bSizer18 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	m_chckBox_angle->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_angle->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_angle1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_angle2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_abscissa->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_abscissa->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_abscissa1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_abscissa2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_abscissaLog->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_ordinate->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_ordinate->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_ordinate1->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_ordinate2->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_ordinateLog->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_title->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_title->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_labelx->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_labelx->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_labely->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_labely->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_grd_label->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_legendHide->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_legend->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_grd_style->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_rdb_axes->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_rdb_grid2d->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_rdb_same_xy->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_xtics->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_xtics_start->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_xtics_step->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_xtics_finish->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_ytics->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_ytics_start->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_ytics_step->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_ytics_finish->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_yx_ratio->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_nticks->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_nticks->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_adapt_depth->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_adapt_depth->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_choice1->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_rdb_box->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_size->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_spn_size_width->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_spn_size_height->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox23->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_choice2->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_inline->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_out_file->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_out_file->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_btm_select_out_file->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnFileBrowse ), NULL, this );
	m_chckGPtitle->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPtitle->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPlegend_interval->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPlegend_interval->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPlegend_in_box->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPlegend_outside->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_radGPlegend_position->Connect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPencoding->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_choiceGPencoding->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPxtics->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPxtics->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPxnomirror->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPytics->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPytics->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPynomirror->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPmxtics->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPmxtics->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	chckGPmytics->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPmytics->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chcklogx->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPlogy->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPpolar->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_sdbSizer1Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Quit ), NULL, this );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
	m_chckBox_angle->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_angle->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_angle1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_angle2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_abscissa->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_abscissa->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_abscissa1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_abscissa2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_abscissaLog->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_ordinate->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_ordinate->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_ordinate1->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_ordinate2->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_ordinateLog->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_title->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_title->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_labelx->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_labelx->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_labely->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtCtrl_labely->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_grd_label->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_legendHide->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_legend->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_grd_style->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_rdb_axes->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_rdb_grid2d->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_rdb_same_xy->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_xtics->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_xtics_start->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_xtics_step->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_xtics_finish->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_ytics->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_ytics_start->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_ytics_step->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_ytics_finish->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_yx_ratio->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_nticks->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_nticks->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_adapt_depth->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_adapt_depth->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_choice1->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_rdb_box->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_size->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_spn_size_width->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_spn_size_height->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox23->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_choice2->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckBox_inline->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chck_out_file->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txt_out_file->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_btm_select_out_file->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnFileBrowse ), NULL, this );
	m_chckGPtitle->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPtitle->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPlegend_interval->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPlegend_interval->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPlegend_in_box->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPlegend_outside->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_radGPlegend_position->Disconnect( wxEVT_COMMAND_RADIOBOX_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPencoding->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_choiceGPencoding->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPxtics->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPxtics->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPxnomirror->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPytics->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPytics->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPynomirror->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPmxtics->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPmxtics->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	chckGPmytics->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_txtGPmytics->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chcklogx->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPlogy->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_chckGPpolar->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_sdbSizer1Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Quit ), NULL, this );
}
