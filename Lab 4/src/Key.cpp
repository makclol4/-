//
// Created by Honor on 27.12.2023.
//

#include <utility>
#include <iostream>

#include "../headers/Key.h"

namespace entity {
    Key::Key(std::string keyName, Command *command) :
            m_keyName{std::move(keyName)}, m_command{command} {}

    void Key::assignCommand(Command *command) {
        std::cout << "Для клавишы " << m_keyName
                  << " Назначена команда " << command->getAction()
                  << std::endl;
        m_command = command;
    }

    std::string Key::getKeyName() {
        return m_keyName;
    }

    Command *Key::getCommand() {
        return m_command;
    }

    void Key::execute() {
        std::cout << "Нажата клавиша " << m_keyName << std::endl;
        m_command->execute();
    }
} // entity