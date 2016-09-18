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
	
	m_button6 = new wxButton( m_panel1, wxID_ANY, wxT("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button6, 0, wxALL, 5 );
	
	m_button7 = new wxButton( m_panel1, wxID_ANY, wxT("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button7, 0, wxALL, 5 );
	
	m_button4 = new wxButton( m_panel1, wxID_ANY, wxT("Delete"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_button4, 0, wxALL, 5 );
	
	bSizer3->Add( bSizer5, 1, wxEXPAND, 5 );
	
	bSizer2->Add( bSizer3, 5, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox_abscissa = new wxCheckBox( m_panel1, wxID_ANY, wxT("abscissa:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chckBox_abscissa->SetValue(true); 
	bSizer6->Add( m_chckBox_abscissa, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText1 = new wxStaticText( m_panel1, wxID_ANY, wxT("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer6->Add( m_staticText1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
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
	
	bSizer2->Add( bSizer6, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_chckBox_ordinate = new wxCheckBox( m_panel1, wxID_ANY, wxT("ordinate:"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( m_chckBox_ordinate, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	m_staticText4 = new wxStaticText( m_panel1, wxID_ANY, wxT("Variable"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer8->Add( m_staticText4, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
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
	
	bSizer2->Add( bSizer8, 1, wxEXPAND, 5 );
	
	m_panel1->SetSizer( bSizer2 );
	m_panel1->Layout();
	bSizer2->Fit( m_panel1 );
	m_notebook1->AddPage( m_panel1, wxT("General"), true );
	m_panel2 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxVERTICAL );
	
	m_grid1 = new wxGrid( m_panel2, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_grid1->CreateGrid( 8, 5 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );
	
	// Columns
	m_grid1->SetColSize( 0, 80 );
	m_grid1->SetColSize( 1, 80 );
	m_grid1->SetColSize( 2, 80 );
	m_grid1->SetColSize( 3, 71 );
	m_grid1->SetColSize( 4, 78 );
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelSize( 30 );
	m_grid1->SetColLabelValue( 0, wxT("Style") );
	m_grid1->SetColLabelValue( 1, wxT("Width line") );
	m_grid1->SetColLabelValue( 2, wxT("Scale point") );
	m_grid1->SetColLabelValue( 3, wxT("Color") );
	m_grid1->SetColLabelValue( 4, wxT("Type point") );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grid1->SetRowSize( 0, 25 );
	m_grid1->SetRowSize( 1, 25 );
	m_grid1->SetRowSize( 2, 25 );
	m_grid1->SetRowSize( 3, 25 );
	m_grid1->SetRowSize( 4, 25 );
	m_grid1->SetRowSize( 5, 25 );
	m_grid1->SetRowSize( 6, 25 );
	m_grid1->SetRowSize( 7, 25 );
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 80 );
	m_grid1->SetRowLabelValue( 0, wxT("line 1") );
	m_grid1->SetRowLabelValue( 1, wxT("line 2") );
	m_grid1->SetRowLabelValue( 2, wxT("line 3") );
	m_grid1->SetRowLabelValue( 3, wxT("line 4") );
	m_grid1->SetRowLabelValue( 4, wxT("line 5") );
	m_grid1->SetRowLabelValue( 5, wxT("line 6") );
	m_grid1->SetRowLabelValue( 6, wxT("line 7") );
	m_grid1->SetRowLabelValue( 7, wxT("line 8") );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer81->Add( m_grid1, 1, wxALL, 5 );
	
	m_panel2->SetSizer( bSizer81 );
	m_panel2->Layout();
	bSizer81->Fit( m_panel2 );
	m_notebook1->AddPage( m_panel2, wxT("Style"), false );
	m_panel3 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText71 = new wxStaticText( m_panel3, wxID_ANY, wxT("Title"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	bSizer7->Add( m_staticText71, 0, wxALL, 5 );
	
	m_textCtrl8 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl8, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText9 = new wxStaticText( m_panel3, wxID_ANY, wxT("xlabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	bSizer7->Add( m_staticText9, 0, wxALL, 5 );
	
	m_textCtrl9 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl9, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText10 = new wxStaticText( m_panel3, wxID_ANY, wxT("ylabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer7->Add( m_staticText10, 0, wxALL, 5 );
	
	m_textCtrl10 = new wxTextCtrl( m_panel3, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_textCtrl10, 0, wxALL|wxEXPAND, 5 );
	
	m_grid2 = new wxGrid( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_grid2->CreateGrid( 8, 1 );
	m_grid2->EnableEditing( true );
	m_grid2->EnableGridLines( true );
	m_grid2->EnableDragGridSize( false );
	m_grid2->SetMargins( 0, 0 );
	
	// Columns
	m_grid2->SetColSize( 0, 183 );
	m_grid2->EnableDragColMove( false );
	m_grid2->EnableDragColSize( true );
	m_grid2->SetColLabelSize( 30 );
	m_grid2->SetColLabelValue( 0, wxT("legend") );
	m_grid2->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_grid2->EnableDragRowSize( true );
	m_grid2->SetRowLabelSize( 80 );
	m_grid2->SetRowLabelValue( 0, wxT("line1") );
	m_grid2->SetRowLabelValue( 1, wxT("line2") );
	m_grid2->SetRowLabelValue( 2, wxT("line3") );
	m_grid2->SetRowLabelValue( 3, wxT("line4") );
	m_grid2->SetRowLabelValue( 4, wxT("line5") );
	m_grid2->SetRowLabelValue( 5, wxT("line6") );
	m_grid2->SetRowLabelValue( 6, wxT("line7") );
	m_grid2->SetRowLabelValue( 7, wxT("line8") );
	m_grid2->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_grid2->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer7->Add( m_grid2, 1, wxALL|wxEXPAND, 5 );
	
	m_panel3->SetSizer( bSizer7 );
	m_panel3->Layout();
	bSizer7->Fit( m_panel3 );
	m_notebook1->AddPage( m_panel3, wxT("Text"), false );
	m_panel4 = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText7 = new wxStaticText( m_panel4, wxID_ANY, wxT("Title"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer12->Add( m_staticText7, 0, wxALL, 5 );
	
	m_textCtrl11 = new wxTextCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_textCtrl11, 0, wxALL, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	wxString m_radioBox1Choices[] = { wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" "), wxT(" ") };
	int m_radioBox1NChoices = sizeof( m_radioBox1Choices ) / sizeof( wxString );
	m_radioBox1 = new wxRadioBox( m_panel4, wxID_ANY, wxT("legend"), wxDefaultPosition, wxDefaultSize, m_radioBox1NChoices, m_radioBox1Choices, 3, wxRA_SPECIFY_COLS|wxRA_SPECIFY_ROWS );
	m_radioBox1->SetSelection( 7 );
	bSizer13->Add( m_radioBox1, 0, wxALIGN_CENTER, 5 );
	
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxHORIZONTAL );
	
	m_checkBox4 = new wxCheckBox( m_panel4, wxID_ANY, wxT("legend interval"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer121->Add( m_checkBox4, 0, wxALL|wxEXPAND, 5 );
	
	m_spinCtrl1 = new wxSpinCtrl( m_panel4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_WRAP, 0, 10, 1 );
	bSizer121->Add( m_spinCtrl1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );
	
	bSizer13->Add( bSizer121, 1, wxEXPAND, 5 );
	
	m_checkBox5 = new wxCheckBox( m_panel4, wxID_ANY, wxT("legend in box"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_checkBox5, 0, wxALL, 5 );
	
	m_checkBox6 = new wxCheckBox( m_panel4, wxID_ANY, wxT("legend outside"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_checkBox6, 0, wxALL, 5 );
	
	bSizer12->Add( bSizer13, 1, wxEXPAND, 5 );
	
	bSizer11->Add( bSizer12, 1, wxEXPAND, 5 );
	
	m_panel4->SetSizer( bSizer11 );
	m_panel4->Layout();
	bSizer11->Fit( m_panel4 );
	m_notebook1->AddPage( m_panel4, wxT("Gnuplot preamble"), false );
	
	bSizer1->Add( m_notebook1, 10, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("Preview"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_button5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Style:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizer14->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	wxString m_choice1Choices[] = { wxT(" continuous"), wxT("hierarchical without comments"), wxT("hierarchical with comments") };
	int m_choice1NChoices = sizeof( m_choice1Choices ) / sizeof( wxString );
	m_choice1 = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choice1NChoices, m_choice1Choices, 0 );
	m_choice1->SetSelection( 0 );
	bSizer14->Add( m_choice1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_chckBox_inline = new wxCheckBox( this, wxID_ANY, wxT("inline plot"), wxDefaultPosition, wxDefaultSize, 0 );
	m_chckBox_inline->SetValue(true); 
	bSizer14->Add( m_chckBox_inline, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer1->Add( bSizer14, 1, wxEXPAND, 5 );
	
	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
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
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_sdbSizer1Cancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Quit ), NULL, this );
	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Generate ), NULL, this );
}

GUIFrame::~GUIFrame()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( GUIFrame::OnClose ) );
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
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::OnGenerate ), NULL, this );
	m_sdbSizer1Cancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Quit ), NULL, this );
	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUIFrame::Generate ), NULL, this );
}
