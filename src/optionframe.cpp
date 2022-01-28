//
// Created by abhilekh on 2022-01-28.
//

#include "../headers/optionframe.h"
#include "../headers/settingDialog.h"

optionFrame::optionFrame()
            : wxFrame(nullptr, wxID_ANY, "Astro Game", wxDefaultPosition,
                      wxDefaultSize, wxDEFAULT_FRAME_STYLE | wxMAXIMIZE){

    //sizers
    wxBoxSizer* verticalSizer = new wxBoxSizer(wxVERTICAL);

    //buttons

    wxButton* continueButton = new wxButton(this, 1, "Continue", wxDefaultPosition, wxSize(400,70));
    wxButton* newButton = new wxButton(this, 2, "New Game",wxDefaultPosition, wxSize(400,70));
    wxButton* settingsButton = new wxButton(this, 3, "Settings",wxDefaultPosition, wxSize(400,70));
    wxButton* helpButton = new wxButton(this, 4, "Help", wxDefaultPosition, wxSize(400,70));
    wxButton* quitButton = new wxButton(this, 5, "Quit", wxDefaultPosition, wxSize(400,70));

    verticalSizer->AddStretchSpacer(1);
    verticalSizer->Add(continueButton,0, wxALIGN_CENTER);
    verticalSizer->Add(newButton, 0, wxALIGN_CENTER );
    verticalSizer->Add(settingsButton,0, wxALIGN_CENTER);
    verticalSizer->Add(helpButton,0, wxALIGN_CENTER);
    verticalSizer->Add(quitButton,0, wxALIGN_CENTER);

    verticalSizer->AddStretchSpacer(1);



    SetSizerAndFit(verticalSizer);

 //set the frame in the centre
  Centre();
}

void optionFrame ::onContinue(wxCommandEvent & event) {

    //event handler for continue buttton

}

void optionFrame ::onNew(wxCommandEvent & event) {

    //..

}

void optionFrame ::onHelp(wxCommandEvent & event) {

    //...

}

void optionFrame ::onSetting(wxCommandEvent & event) {

    //..
    settingDialog* setting = new settingDialog(this);
    setting->showDialog();

}

void optionFrame :: onQuit(wxCommandEvent& event){

    wxMessageDialog* closeDialog = new wxMessageDialog(this, "Are you sure, You want to Quit?", "Quit App", wxOK | wxCANCEL);
    if(closeDialog->ShowModal() == wxID_OK){
        Destroy();
    }

}

wxBEGIN_EVENT_TABLE(optionFrame, wxFrame)
EVT_BUTTON(1, optionFrame::onContinue)
EVT_BUTTON(2, optionFrame::onNew)
EVT_BUTTON(3, optionFrame::onSetting)
EVT_BUTTON(4, optionFrame::onHelp)
EVT_BUTTON(5, optionFrame::onQuit)

wxEND_EVENT_TABLE()