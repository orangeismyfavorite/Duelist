#pragma once

#include "wx/wx.h"
#include <wx/wfstream.h>
#include <wx/accel.h>
#include <string>


class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

private:
	wxMenuBar* m_MenuBar = nullptr;

	void OnMenuCreate(wxCommandEvent& evt);
	void OnMenuExit(wxCommandEvent& evt);
	void OnButtonClear(wxCommandEvent& evt);
	void OnEnterPressed(wxCommandEvent& evt);
	void OnEnterFocus(wxKeyEvent& evt);
	void OnButtonCommands(wxCommandEvent& evt);

public:
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxButton* m_btn4 = nullptr;
	wxButton* m_btn5 = nullptr;
	wxButton* m_btn6 = nullptr;
	wxButton* m_btn7 = nullptr;
	wxButton* m_btn8 = nullptr;

	wxTextCtrl* m_txt1 = nullptr;
	wxListBox* m_list1 = nullptr;
	wxListBox* m_list2 = nullptr;
	wxListBox* m_list3 = nullptr;

	wxDECLARE_EVENT_TABLE();
};
