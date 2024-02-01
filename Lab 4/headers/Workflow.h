//
// Created by Honor on 23.11.2023.
//

#ifndef VIRTUAL_KEYBOARD_WORKFLOW_H
#define VIRTUAL_KEYBOARD_WORKFLOW_H

#include "IWorkflow.h"
#include "Command.h"

#include <vector>
#include <string>

namespace entity {
    class Workflow : public IWorkflow {
    public:
        Workflow();

        void printCommandList() override;

        std::string getAction(const std::string &key) override;

        void reassignKey(const std::string &key, const std::string &command) override;

        void launch() override;

    private:
        std::string m_sequencing;

        std::vector<Command> m_commandList;
    };
}


#endif //VIRTUAL_KEYBOARD_WORKFLOW_H
