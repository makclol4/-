//
// Created by Honor on 23.11.2023.
//

#include "../headers/Workflow.h"

#include <iostream>
#include <string>
#include <windows.h>

using namespace entity;

Workflow::Workflow() {
    m_commandList.emplace_back("backspace", "back");
    m_commandList.emplace_back("ctrl+C", "copy");
    m_commandList.emplace_back("ctrl+V", "paste");
}

void Workflow::printCommandList() {
    std::cout << "Temp Command List" << std::endl;
    for (Command command: m_commandList) {
        std::cout << "Command: " << command.getAction() << ", key: " << command.getKey() << std::endl;
    }
}

void Workflow::reassignKey(const std::string &oldKey, const std::string &newKey) {
    for (auto & command : m_commandList) {
        if (command.getKey() == oldKey) {
            command.setKey(newKey);
            return;
        }
    }
}

std::string Workflow::getAction(const std::string &key) {
    for (auto & command: m_commandList) {
        if (command.getKey() == key) {
            return command.getAction();
        }
    }

    return "";
}

void Workflow::launch() {
    std::string stringForCopy;

    while (true) {
        std::cout << "Введите клавишу или команду" << std::endl;
        std::cout << "(exit | reassign | showCommands)" << std::endl;
        std::string key;
        std::cin >> key;

        if (key == "exit") {
            break;
        }

        if (key == "showCommands") {
            printCommandList();
        } else if (key == "reassign") {
            std::cout << "Введите клавишу, которую хотите переназначить" << std::endl;
            std::string oldKey;
            std::cin >> oldKey;

            std::cout << "Введите новую клавишу" << std::endl;
            std::string newKey;
            std::cin >> newKey;

            reassignKey(oldKey, newKey);
        } else if (getAction(key) == "back") {
            if (!m_sequencing.empty()) {
                m_sequencing.pop_back();
            }
        } else {
            if (getAction(key) == "copy") {
                stringForCopy = m_sequencing;
            } else if (getAction(key) == "paste") {
                if (!stringForCopy.empty()) {
                    m_sequencing += stringForCopy;
                }
            } else {
                m_sequencing += key;
            }
        }
        std::cout << m_sequencing << std::endl;
        Sleep(1000);
    }
}