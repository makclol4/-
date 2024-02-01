//
// Created by Honor on 27.12.2023.
//

#ifndef VIRTUAL_KEYBOARD_STRINGCOMMAND_H
#define VIRTUAL_KEYBOARD_STRINGCOMMAND_H

#include "Command.h"
#include <string>

namespace entity {

    class StringCommand : public Command {
    public:
        explicit StringCommand(std::string key);

        void execute() override;

        void undo() override;

        std::string getAction() override;

    private:
        std::string m_key;
    };

} // entity

#endif //VIRTUAL_KEYBOARD_STRINGCOMMAND_H
