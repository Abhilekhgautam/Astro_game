//
// Created by abhilekh on 2022-01-28.
//

#ifndef ASTRO_GAME_SETTINGDIALOG_H
#define ASTRO_GAME_SETTINGDIALOG_H

#include <wx/wx.h>

class settingDialog : public wxDialog{
public:
    settingDialog(wxWindow* parent);
    void showDialog();
};

#endif //ASTRO_GAME_SETTINGDIALOG_H
