//
// Created by Honor on 27.12.2023.
//

#include "../headers/StringCommand.h"

#include <iostream>
#include <utility>

namespace entity {
    void StringCommand::execute() {
        std::cout << "Напечатать " + m_key << std::endl;

    }

    void StringCommand::undo() {
        std::cout << "Отменить печать " + m_key << std::endl;

    }

    StringCommand::StringCommand(std::string key)
    : m_key{std::move(key)} {}

    std::string StringCommand::getAction() {
        return "Печать";
    }
} // entity