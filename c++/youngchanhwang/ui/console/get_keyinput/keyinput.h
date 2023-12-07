//
// Created by eddi on 23. 12. 6.
//

#ifndef YOUNGCHANHWANG_KEYINPUT_H
#define YOUNGCHANHWANG_KEYINPUT_H

#define MAX_KEYINPUT        32

#include <iostream>

class keyinput {
public:
    static void get_keyinput(std::string& keyboard_input);


    keyinput();
    ~keyinput();
};

#endif //YOUNGCHANHWANG_KEYINPUT_H
