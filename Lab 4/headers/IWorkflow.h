//
// Created by Honor on 23.11.2023.
//

#ifndef VIRTUAL_KEYBOARD_IWORKFLOW_H
#define VIRTUAL_KEYBOARD_IWORKFLOW_H

#include <string>

namespace entity {
    class IWorkflow {
    public:
        virtual void printCommandList() = 0;

        virtual std::string getAction(const std::string &key) = 0;

        virtual void reassignKey(const std::string &key, const std::string &command) = 0;

        virtual void launch() = 0;
    };
}

#endif //VIRTUAL_KEYBOARD_IWORKFLOW_H