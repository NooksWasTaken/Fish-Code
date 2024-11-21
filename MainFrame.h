#include <wx/wx.h>
#include <wx/gauge.h>
#include <wx/sound.h>

//Creates a class that inherits the wxFrame class from wxWidgets

class MainFrame : public wxFrame {
public:
    MainFrame(const wxString& title);

private:
    void OnButtonClicked(wxCommandEvent& event);
    wxStaticText* counterText;
    wxStaticText* pointText;
    wxStaticText* pointTextLabel;
    wxGauge* healthBar;
    wxSound* fishSound;
    int counter;
    int point;
};
