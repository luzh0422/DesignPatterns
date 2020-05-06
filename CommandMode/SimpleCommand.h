//
// Created by Luzh on 2020/5/3.
//

#ifndef COMMANDMODE_SIMPLECOMMAND_H
#define COMMANDMODE_SIMPLECOMMAND_H

#include <string>
#include "Command.h"

class SimpleCommand : public Command {
private:
    std::string mPayLoad;
public:
    explicit SimpleCommand(std::string payLoad): mPayLoad(payLoad) {}
    void execute() const override;
};


#endif //COMMANDMODE_SIMPLECOMMAND_H
