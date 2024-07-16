#include "App.h"
#include "MainFrame.h"
#include <wx/wx.h>

//This file is responsible for creating an instance of the program

wxIMPLEMENT_APP(App);

bool App::OnInit() {
	MainFrame* mainFrame = new MainFrame("Fish App Test");
	mainFrame->SetClientSize(800, 600);
	mainFrame->Center();
	mainFrame->Show();
	return true;
}
