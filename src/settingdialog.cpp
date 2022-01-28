//
// Created by abhilekh on 2022-01-28.
//

#include "../headers/settingDialog.h"

settingDialog ::settingDialog(wxWindow *parent)
               : wxDialog(parent, wxID_ANY,"Setting",wxDefaultPosition, wxSize(600,400)){

    wxButton* avatar = new wxButton(this,1,"Avatar",wxDefaultPosition, wxDefaultSize);
    wxButton* sound = new wxButton(this, 2, "Sound", wxDefaultPosition, wxDefaultSize);

    wxBoxSizer* hsizer = new wxBoxSizer(wxHORIZONTAL);

    hsizer->Add(avatar,0,wxALIGN_CENTER);
    hsizer->Add(sound, 0, wxALIGN_CENTER);

    SetSizer(hsizer);

}

void settingDialog ::showDialog() {
    wxDialog::Show(true);
}

