//
// Created by Honor on 23.11.2023.
//

#ifndef VIRTUAL_KEYBOARD_IKEYBOARD_H
#define VIRTUAL_KEYBOARD_IKEYBOARD_H

#include <string>

namespace entity {
    class IKeyboard {
    public:
        virtual void launch() = 0;
    };
}

#endif //VIRTUAL_KEYBOARD_IKEYBOARD_H
