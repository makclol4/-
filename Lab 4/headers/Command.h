//
// Created by Honor on 13.12.2023.
//

#ifndef VIRTUAL_KEYBOARD_COMMAND_H
#define VIRTUAL_KEYBOARD_COMMAND_H

#include <string>

namespace entity {
    class Command {
    public:
        virtual void execute() = 0;

        virtual void undo() = 0;

        virtual std::string getAction() = 0;
    };
}

#endif //VIRTUAL_KEYBOARD_COMMAND_H
