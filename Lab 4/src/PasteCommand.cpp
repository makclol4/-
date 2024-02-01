//
// Created by Honor on 27.12.2023.
//

#include "../headers/PasteCommand.h"

#include <iostream>

namespace entity {
    void PasteCommand::execute() {
        std::cout << "Вставить" << std::endl;

    }

    void PasteCommand::undo() {
        std::cout << "Отменить вставку" << std::endl;

    }

    std::string PasteCommand::getAction() {
        return "Вставка";
    }
} // entity