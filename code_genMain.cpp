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

// font color = selected color
// TODO may be remove this to other function
    for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++) //maybe to do m_grd_legend
    {
        wxString str_trace_color = m_grd_style->GetCellValue(i,2);
        if (str_trace_color.IsSameAs(wxT("default")))
            m_grd_style->SetCellTextColour(i,2,wxColour(128,128,128));
        if (str_trace_color.IsSameAs(wxT("blue")))
            m_grd_style->SetCellTextColour(i,2,wxColour(0,128,255));
        if (str_trace_color.IsSameAs(wxT("red")))
            m_grd_style->SetCellTextColour(i,2,wxColour(255,0,0));
        if (str_trace_color.IsSameAs(wxT("green")))
            m_grd_style->SetCellTextColour(i,2,wxColour(0,192,0));
        if (str_trace_color.IsSameAs(wxT("magenta")))
            m_grd_style->SetCellTextColour(i,2,wxColour(192,0,255));
        if (str_trace_color.IsSameAs(wxT("black")))
            m_grd_style->SetCellTextColour(i,2,wxColour(0,0,0));
        if (str_trace_color.IsSameAs(wxT("cyan")))
            m_grd_style->SetCellTextColour(i,2,wxColour(0,238,238));

    }
    m_grd_style->ForceRefresh();

if (true) //point_type separate
{
    bool all_point_type_is_default=true;
    for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++)
    {
        wxString trace_type = m_grd_style->GetCellValue(i,1);
        if ((trace_type.IsSameAs(wxT("points"))
          || trace_type.IsSameAs(wxT("linespoints")))
          && !m_grd_style->GetCellValue(i,4).IsSameAs("default"))
            all_point_type_is_default = false;
        m_grd_style->SetCellBackgroundColour(i,4,wxColour(255,255,255));
    }
    if (!all_point_type_is_default)
    {
        wxString point_type;
        for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++) //maybe to do m_grd_legend
        {
            wxString trace_type = m_grd_style->GetCellValue(i,1);
            if (trace_type.IsSameAs(wxT("points"))
             || trace_type.IsSameAs(wxT("linespoints")))

            {
                point_type += wxT(",");
                wxString str_point_type_sign = m_grd_style->GetCellValue(i,4);
                int int_point_type = wxArrayString(WXSIZEOF(point_types_sign),point_types_sign).Index(str_point_type_sign,true,false);
                point_type += point_types_name[int_point_type];
                if(int_point_type == 0)
                    m_grd_style->SetCellBackgroundColour(i,4,wxColour(255,0,0));
            }
        }
            s += wxT(",");
            s += wxT("\n");
            s += wxT("[point_type") + point_type + wxT("]");

    }
    m_grd_style->ForceRefresh();
}

if (true) //trace_color separate
{
    bool all_trace_color_is_default=true;
    for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++)
    {
        if(!m_grd_style->GetCellValue(i,2).IsSameAs("default"))
            all_trace_color_is_default = false;
        m_grd_style->SetCellBackgroundColour(i,2,wxColour(255,255,255));
    }
    if (!all_trace_color_is_default)
    {
        wxString trace_color;
        for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++) //maybe to do m_grd_legend
        {
            trace_color += wxT(",");
            wxString str_trace_color = m_grd_style->GetCellValue(i,2);
            trace_color += str_trace_color;
            if(str_trace_color.IsSameAs(wxT("default")))
                m_grd_style->SetCellBackgroundColour(i,2,wxColour(255,0,0));

        }
        s += wxT(",");
        s += wxT("\n");
        s += wxT("[color") + trace_color + wxT("]");

    }
    m_grd_style->ForceRefresh();
}

bool all_style_is_default=true;
    for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++)
    {
        if((!m_grd_style->GetCellValue(i,1).IsSameAs("default"))
        ||(m_grd_style->GetCellValue(i,3).Len()>0)
        ||(m_grd_style->GetCellValue(i,5).Len()>0))
            all_style_is_default = false;
        m_grd_style->SetCellBackgroundColour(i,1,wxColour(255,255,255));


    }

if (!all_style_is_default) // TODO
{
    s += wxT(",");
    s += wxT("\n");
    wxString style;
    for(unsigned int i=0;i<m_lstBox_expression->GetCount();i++) //maybe to do m_grd_legend
    {
        wxString trace_style;

        wxString str_trace_type = m_grd_style->GetCellValue(i,1);
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
        trace_style += str_trace_type;
        switch(int_trace_type)
        {
            case 0: //defaut
            {
                m_grd_style->SetCellBackgroundColour(i,1,wxColour(255,0,0));
                break;
            }
            case 1: //lines
            {
                if (str_line_wigth.Len()>0)
                {
                    trace_style += wxT(",")
                     + str_line_wigth;
                }
                if (int_trace_color && // not defaut
                !true ) // set color not separate
                {
                    trace_style+= wxT(",")
                     + str_trace_color_digit;
                    if (str_line_wigth.Len()==0)
                        m_grd_style->SetCellBackgroundColour(i,3,wxColour(255,0,0));
                    else
                        m_grd_style->SetCellBackgroundColour(i,3,wxColour(255,255,255));

                }

                break;
            }
            case 2: //points
            {
                trace_style += wxT(",")
                 + str_point_size
                 + wxT(",")
                 + str_trace_color_digit
                 + wxT(",")
                 + str_point_type_digit;
                break;
            }
            case 3: //linespoints
            {
                trace_style += wxT(",")
                 + str_line_wigth
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
                if (int_trace_color && // not defaut
                !true ) // set color not separate
                {
                    trace_style+= wxT(",")
                     + str_trace_color_digit;
                }
                break;
            }
        }
        style += wxT(",");
        style += wxT("\n");
        if (trace_style.Find(wxT(","))!=wxNOT_FOUND)
            style += wxT("[") + trace_style + wxT("]");
        else
            style += trace_style;
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
