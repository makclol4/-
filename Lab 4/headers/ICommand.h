//
// Created by Honor on 13.12.2023.
//

#ifndef VIRTUAL_KEYBOARD_ICOMMAND_H
#define VIRTUAL_KEYBOARD_ICOMMAND_H

#include <string>

namespace entity {
    class ICommand {
    private:
        virtual std::string getKey() = 0;

        virtual std::string getAction() = 0;

        virtual void setKey(const std::string &key) = 0;
    };
}

#endif //VIRTUAL_KEYBOARD_ICOMMAND_H
