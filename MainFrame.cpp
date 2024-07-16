#include "MainFrame.h"

MainFrame::MainFrame(const wxString& title)
    : wxFrame(nullptr, wxID_ANY, title, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE & ~(wxRESIZE_BORDER | wxMAXIMIZE_BOX)), counter(10) {
    wxPanel* panel = new wxPanel(this);

    wxFont largerFont(10, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL);

//Text display declarations (to be optimized)
    pointTextLabel = new wxStaticText(panel, wxID_ANY, "POINTS:", wxPoint(349, 50), wxSize(60, 40));
    pointTextLabel->SetFont(largerFont);

    pointText = new wxStaticText(panel, wxID_ANY, "0", wxPoint(401, 50), wxSize(60, 40));
    pointText->SetFont(largerFont);

    counterText = new wxStaticText(panel, wxID_ANY, "10", wxPoint(383, 130), wxSize(60, 40));

//Gauge bar declaration
    healthBar = new wxGauge(panel, wxID_ANY, 10, wxPoint(340, 150), wxSize(100, 15));
    healthBar->SetValue(10);

//button declaration
    wxButton* button = new wxButton(panel, wxID_ANY, "F I S H", wxPoint(340, 260), wxSize(100, 50));

//Assign an event to the button
    button->Bind(wxEVT_BUTTON, &MainFrame::OnButtonClicked, this);
}
//Function when Fish button is clicked
void MainFrame::OnButtonClicked(wxCommandEvent& event) {
    counter--;
    if (counter <= 0) {
        counter = 10;
        point += 200;
    }

//Updates the health display when the button is clicked and the point display when the bar reaches 0
    pointText->SetLabel(wxString::Format("%d", point));
    counterText->SetLabel(wxString::Format("%d", counter));
    healthBar->SetValue(counter);
}

//Add function for level scaling
//Add save function
//Leaderboard
