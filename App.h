#pragma once
#include <wx/wx.h>

//Allows the app to stay running until closed by the user

class App : public wxApp
{
public:
	bool OnInit();
};
