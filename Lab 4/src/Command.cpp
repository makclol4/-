//
// Created by Honor on 13.12.2023.
//

#include <utility>

#include "../headers/Command.h"

using namespace entity;

Command::Command(std::string key, std::string action) : m_key{std::move(key)}, m_action{std::move(action)} {

}

std::string Command::getKey() {
    return m_key;
}

std::string Command::getAction() {
    return m_action;
}

void Command::setKey(const std::string &key) {
    m_key = key;
}
