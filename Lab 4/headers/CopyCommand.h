//
// Created by Honor on 27.12.2023.
//

#ifndef VIRTUAL_KEYBOARD_COPYCOMMAND_H
#define VIRTUAL_KEYBOARD_COPYCOMMAND_H

#include "Command.h"
#include <iostream>

namespace entity {

    class CopyCommand : public Command {
    public:
        void execute() override;

        void undo() override;

        std::string getAction() override;
    };

} // entity

#endif //VIRTUAL_KEYBOARD_COPYCOMMAND_H
