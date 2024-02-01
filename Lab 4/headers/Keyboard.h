//
// Created by Honor on 25.10.2023.
//

#ifndef VIRTUAL_KEYBOARD_KEYBOARD_H
#define VIRTUAL_KEYBOARD_KEYBOARD_H

#include "Command.h"
#include "Key.h"

#include <string>
#include <vector>

namespace entity {
    class Keyboard {
    public:
        Keyboard();

        void undo();

        void addKey(const Key &key);

        void press(const std::string &key);

        void reassignKey(const std::string &key, Command *command);

    private:
        std::vector<Key> m_keyList;
        std::vector<Key> m_sequencing;
    };
}


#endif //VIRTUAL_KEYBOARD_KEYBOARD_H
