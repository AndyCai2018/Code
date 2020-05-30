// wxWidgets "Hello World" Program
// For compilers that support precompilation, includes "wx/wx.h".
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
#include <wx/wx.h>
#endif



class MyApp : public wxApp
{
public:
	virtual bool OnInit();
};
class MyFrame : public wxFrame
{
public:
	MyFrame(const wxString& title);

	void OnHello(wxCommandEvent& event);
	void OnExit(wxCommandEvent& event);
	void OnAbout(wxCommandEvent& event);
private:
	
	wxDECLARE_EVENT_TABLE();
};
enum
{
	ID_Hello = 1
};
//有了这一行就可以使用MyApp& wxGetApp()
DECLARE_APP(MyApp)
//
wxIMPLEMENT_APP(MyApp);//告诉程序是哪一个类，声明一个宏，知道是这个程序MyAPP
bool MyApp::OnInit()
{
	MyFrame *frame = new MyFrame( "DMU_RADAR");
	frame->Show(true);
	return true;
}

BEGIN_EVENT_TABLE(MyFrame, wxFrame)
  EVT_MENU(ID_Hello, MyFrame::OnHello)
  EVT_MENU(wxID_EXIT, MyFrame::OnExit)
END_EVENT_TABLE()


MyFrame::MyFrame(const wxString&title)
	   : wxFrame(NULL, wxID_ANY, "Hello Radar")
{
	wxMenu *menuFile = new wxMenu;
	menuFile->Append(ID_Hello, "&Radar\tCtrl-H",
		"Help string shown in status bar for this menu item");
	menuFile->AppendSeparator();
	menuFile->Append(wxID_EXIT);
	wxMenu *menuHelp = new wxMenu;
	menuHelp->Append(wxID_ABOUT);
	wxMenuBar *menuBar = new wxMenuBar;
	menuBar->Append(menuFile, "&Connect");
	menuBar->Append(menuHelp, "&Help");
	SetMenuBar(menuBar);
	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets!");
	/*Bind(wxEVT_MENU, &MyFrame::OnHello, this, ID_Hello);
	
	Bind(wxEVT_MENU, &MyFrame::OnAbout, this, wxID_ABOUT);
	Bind(wxEVT_MENU, &MyFrame::OnExit, this, wxID_EXIT);*/
}
void MyFrame::OnExit(wxCommandEvent& event)
{
	Close(true);
}
void MyFrame::OnAbout(wxCommandEvent& event)
{
	wxMessageBox("This is Navico 4G radar Software by Caisong",
		"About Hello World", wxOK | wxICON_INFORMATION);
}
void MyFrame::OnHello(wxCommandEvent& event)
{
	wxLogMessage("Hello world from wxWidgets!");
}