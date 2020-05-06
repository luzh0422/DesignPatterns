//
// Created by Luzh on 2020/5/3.
//

#ifndef COMMANDMODE_COMMAND_H
#define COMMANDMODE_COMMAND_H

class Command {
public:
    virtual ~Command() {}
    virtual void execute() const = 0;
};

#endif //COMMANDMODE_COMMAND_H
