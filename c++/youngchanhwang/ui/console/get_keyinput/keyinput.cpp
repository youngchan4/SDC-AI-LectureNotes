//
// Created by eddi on 23. 12. 6.
//
#include "keyinput.h"

#include <iostream>
#include <string>
#include <algorithm>

void keyinput::get_keyinput(std::string &keyboard_input)
{
    std::getline(std::cin, keyboard_input);

    keyboard_input.erase(std::remove_if(keyboard_input.begin(),
                                        keyboard_input.end(), ::isspace),
                         keyboard_input.end());
}

keyinput::keyinput() {}
keyinput::~keyinput() {}
