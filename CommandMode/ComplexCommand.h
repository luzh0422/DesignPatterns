//
// Created by Luzh on 2020/5/3.
//

#ifndef COMMANDMODE_COMPLEXCOMMAND_H
#define COMMANDMODE_COMPLEXCOMMAND_H

#include "Command.h"
#include "Receiver.h"
#include <string>

class ComplexCommand : public Command {
private:
    Receiver *mReceiver;
    std::string mA;
    std::string mB;

public:
    ComplexCommand(Receiver *receiver, std::string a, std::string b) : mReceiver(receiver), mA(a), mB(b) {}
    void execute() const override;
};


#endif //COMMANDMODE_COMPLEXCOMMAND_H
