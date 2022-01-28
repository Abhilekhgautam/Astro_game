//
// Created by abhilekh on 2022-01-28.
//

#ifndef ASTRO_GAME_OPTIONFRAME_H
#define ASTRO_GAME_OPTIONFRAME_H

#include <wx/wx.h>

class optionFrame : public wxFrame{

    void onContinue(wxCommandEvent& );
    void onNew(wxCommandEvent&);
    void onSetting(wxCommandEvent&);
    void onHelp(wxCommandEvent&);
    void onQuit(wxCommandEvent&);

    wxDECLARE_EVENT_TABLE();

public:
    optionFrame();

};

#endif //ASTRO_GAME_OPTIONFRAME_H
