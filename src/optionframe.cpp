//
// Created by abhilekh on 2022-01-28.
//

#include "../headers/optionframe.h"

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
    wxButton* exitButton = new wxButton(this, 5, "Quit", wxDefaultPosition, wxSize(400,70));

  //add all the buttons to the horizontal sizer for horizontal alignment
   verticalSizer->AddStretchSpacer(1);
    verticalSizer->Add(continueButton,0, wxALIGN_CENTER);
    verticalSizer->Add(newButton, 0, wxALIGN_CENTER );
    verticalSizer->Add(settingsButton,0, wxALIGN_CENTER);
    verticalSizer->Add(exitButton,0, wxALIGN_CENTER);
    verticalSizer->Add(helpButton,0, wxALIGN_CENTER);
    verticalSizer->AddStretchSpacer(1);



    SetSizerAndFit(verticalSizer);

 //set the frame in the centre
  Centre();
}