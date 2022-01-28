//
// Created by abhilekh on 2022-01-28.
//

#include "../headers/myapp.h"
#include "../headers/optionframe.h"

wxIMPLEMENT_APP(myApp);

bool myApp ::OnInit() {

    optionFrame* landingFrame = new optionFrame();
    landingFrame->Show(true);

    return true;

}

