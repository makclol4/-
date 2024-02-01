//
// Created by Honor on 25.10.2023.
//

#include "../headers/Keyboard.h"
#include "../headers/CopyCommand.h"
#include "../headers/PasteCommand.h"
#include "../headers/StringCommand.h"
#include "windows.h"

namespace entity {

    Keyboard::Keyboard() {
        addKey(Key("Ctrl+C",
                   new CopyCommand()));
        addKey(Key("Ctrl+V",
                   new PasteCommand()));
    }

    void Keyboard::undo() {
        Sleep(2000);

        if (!m_sequencing.empty()) {
            m_sequencing[m_sequencing.size() - 1]
            .getCommand()->undo();
            m_sequencing.pop_back();

            for (Key sequenceKey: m_sequencing)
                if (sequenceKey
                .getCommand()->getAction()== "Печать")
                    std::cout << sequenceKey.getKeyName();
            std::cout << std::endl;
        }
    }

    void Keyboard::addKey(const Key &key) {
        m_keyList.push_back(key);
    }

    void Keyboard::press(const std::string &key) {
        Sleep(2000);

        for (Key m_key: m_keyList) {
            if (m_key.getKeyName() == key) {
                m_key.execute();
                m_sequencing.push_back(m_key);
                return;
            }
        }

        Key pressedKey(key,
                       new StringCommand(key));
        pressedKey.execute();

        addKey(pressedKey);
        m_sequencing.push_back(pressedKey);

        for (Key sequenceKey: m_sequencing)
            if (sequenceKey.getCommand()->getAction() == "Печать")
                std::cout << sequenceKey.getKeyName();
        std::cout << std::endl;
    }

    void Keyboard::reassignKey(const std::string &key,
                               Command *command) {
        Sleep(2000);

        for (Key &reassignedKey: m_keyList) {
            if (reassignedKey.getKeyName() == key) {
                reassignedKey.assignCommand(command);
                return;
            }
        }

        addKey(Key(key, command));
    }
} // entity