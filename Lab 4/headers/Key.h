//
// Created by Honor on 27.12.2023.
//

#ifndef VIRTUAL_KEYBOARD_KEY_H
#define VIRTUAL_KEYBOARD_KEY_H

#include "Command.h"
#include <string>

namespace entity {

    class Key {
    public:
        Key(std::string keyName, Command *command);

        void assignCommand(Command *command);

        void execute();

        Command *getCommand();

        std::string getKeyName();

    private:
        std::string m_keyName;
        Command *m_command;
    };

} // entity

#endif //VIRTUAL_KEYBOARD_KEY_H
