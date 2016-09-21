/***************************************************************
 * Name:      code_genMain.cpp
 * Purpose:   Code for Application Frame
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

#include "code_genMain.h"

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
        wxbuild << _T("-Mac");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}


code_genFrame::code_genFrame(wxFrame *frame)
    : GUIFrame(frame)
{

}

code_genFrame::~code_genFrame()
{
}

void code_genFrame::OnClose(wxCloseEvent &event)
{
    Destroy();
}

void code_genFrame::OnQuit(wxCommandEvent &event)
{
    Destroy();
}


void code_genFrame::OnGenerate(wxCommandEvent& event)
{
  //wxString f = combo_box_1->GetValue();     // format
  //wxString p = combo_box_2->GetValue();     // preamble
  wxString s;                               // result

  wxString y1 = m_txtCtrl_ordinate1->GetValue();
  wxString y2 = m_txtCtrl_ordinate2->GetValue();
  //int t = text_ctrl_8->GetValue();          // Number of ticks
  //wxString file = text_ctrl_9->GetValue();  // plot to file


  // Expression
  wxArrayString expression = m_lstBox_expression->GetStrings();
  s = expression[0];

  for(unsigned int i=1;i<expression.GetCount();i++)
  {
   s += wxT(",");
   s += wxT("\n");
   s += expression[i];

  }

  s = wxT("[") + s + wxT("]");

  // x-range
if (m_chckBox_abscissa->GetValue())
{
  s += wxT(",");
  s += wxT("\n");
  wxString abscissa1 = m_txtCtrl_abscissa1->GetValue();
  wxString abscissa2 = m_txtCtrl_abscissa2->GetValue();
  wxString abscissa = m_txtCtrl_abscissa->GetValue();
  s += wxT("[") + abscissa + wxT(",") + abscissa1 + wxT(",") + abscissa2 + wxT("]");
}
if (m_chckBox_abscissaLog->GetValue())
{
  s += wxT(",");
  s += wxT("[logx]");
}
  // y-range
if (m_chckBox_ordinate->GetValue())
{
  s += wxT(",");
  s += wxT("\n");
  wxString ordinate1 = m_txtCtrl_ordinate1->GetValue();
  wxString ordinate2 = m_txtCtrl_ordinate2->GetValue();
  wxString ordinate = m_txtCtrl_ordinate->GetValue();
  s += wxT("[") + ordinate + wxT(",") + ordinate1 + wxT(",") + ordinate2 + wxT("]");
}
if (m_chckBox_ordinateLog->GetValue())
{
  s += wxT(",");
  s += wxT("[logy]");
}

// Text
if (m_chckBox_title->GetValue())
{
  s += wxT(",");
  s += wxT("\n");
  wxString title = m_txtCtrl_title->GetValue();
  s += wxT("[title, \"") + title + wxT("\"]");
}
if (m_chckBox_labelx->GetValue())
{
  s += wxT(",");
  s += wxT("\n");
  wxString labelx = m_txtCtrl_labelx->GetValue();
  s += wxT("[xlabel, \"") + labelx + wxT("\"]");
}
if (m_chckBox_labely->GetValue())
{
  s += wxT(",");
  s += wxT("\n");
  wxString labely = m_txtCtrl_labely->GetValue();
  s += wxT("[ylabel, \"") + labely + wxT("\"]");
}
//Legend
if (m_chckBox_legendHide->GetValue())
{
  s += wxT(",");
  s += wxT("\n");
  s += wxT("[legend, false]");
}
if (m_chckBox_legend->GetValue())
{
  s += wxT(",");
  s += wxT("\n");
  wxString legend;
  for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++) //maybe to do m_grd_legend
  {
   legend += wxT(",");
   legend += wxT("\n");
   legend += wxT("\"");
   legend += m_grd_style->GetCellValue(i,0);
   legend += wxT("\"");
  }

  s += wxT("[legend") + legend + wxT("]");
}
//Style
if (true) // TODO
{
    s += wxT(",");
    s += wxT("\n");
    wxString style;
    for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++) //maybe to do m_grd_legend
    {
        style += wxT(",");
        style += wxT("\n");
        wxString str_trace_type = m_grd_style->GetCellValue(i,1);
        //int int_trace_type = m_grd_style->GetCellEditor(i,1)
        int int_trace_type = wxArrayString(WXSIZEOF(trace_types),trace_types).Index(str_trace_type,true,false);
        wxString str_trace_color = m_grd_style->GetCellValue(i,2);
        int int_trace_color = wxArrayString(WXSIZEOF(trace_colors),trace_colors).Index(str_trace_color,true,false);
        wxString str_trace_color_digit = wxString::Format(wxT("%d"),int_trace_color);
        wxString str_line_wigth = m_grd_style->GetCellValue(i,3);
        wxString str_point_type_sign = m_grd_style->GetCellValue(i,4);
        int int_point_type = wxArrayString(WXSIZEOF(point_types_sign),point_types_sign).Index(str_point_type_sign,true,false);
        wxString str_point_type_name = point_types_name[int_point_type];
        wxString str_point_type_digit = wxString::Format(wxT("%d"),int_point_type);
        wxString str_point_size = m_grd_style->GetCellValue(i,5);

        // general style generator
        style += wxT("[") + str_trace_type + wxT(",");
        switch(int_trace_type)
        {
            case 0: //defaut
            case 1: //line
            {
                style += str_line_wigth
                 + wxT(",")
                 + str_trace_color_digit;
                break;
            }
            case 2: //point
            {
                style += str_point_size
                 + wxT(",")
                 + str_trace_color_digit
                 + wxT(",")
                 + str_point_type_digit;
                break;
            }
            case 3: //linespoints
            {
                style += str_line_wigth
                 + wxT(",")
                 + str_point_size
                 + wxT(",")
                 + str_trace_color_digit
                 + wxT(",")
                 + str_point_type_digit;
                break;
            }
            case 4: //impulses
            case 5: //dots
            {
                style += str_trace_color_digit;
                break;
            }
        }
        style += wxT("]");

    }

  s += wxT("[style") + style + wxT("]");
}
/*
  // plot format
  if (f != _("default") && f != _("inline"))
    s += wxT(",\n [plot_format, ") + f + wxT("]");


  // gnuplot_preamble
  if (p.Length() > 0)
    s += wxT(",\n [gnuplot_preamble, \"") + p + wxT("\"]");
  if (t != 10)
  {
    s += wxT(",\n [nticks,");
    s += wxString::Format(wxT("%d"), t);
    s += wxT("]");
  }

// plot to file
  if (file.Length())
  {
    s += wxT(", [gnuplot_term, ps]");
#if defined (__WXMSW__)
    file.Replace(wxT("\\"), wxT("/"));
#endif

    if (file.Right(4) != wxT(".eps") && file.Right(3) != wxT(".ps"))
      file = file + wxT(".eps");
    s += wxT(",\n [gnuplot_out_file, \"") + file + wxT("\"]");
  }
  */
  s = wxT("plot2d(") + s + wxT(")$");

  // inline?
  if (m_chckBox_inline->GetValue())
    s = wxT("wx") + s;

     m_textCtrl13->SetValue(s);
}
