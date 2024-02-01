//
// Created by Honor on 27.12.2023.
//

#include "../headers/CopyCommand.h"

#include <iostream>

namespace entity {
    void CopyCommand::execute() {
        std::cout << "Скопировать" << std::endl;
    }

    void CopyCommand::undo() {
        std::cout << "Отменить копирование" << std::endl;
    }

    std::string CopyCommand::getAction() {
        return "Копирование";
    }
} // entity