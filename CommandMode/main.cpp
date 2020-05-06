#include <iostream>

#include "Invoker.h"
#include "SimpleCommand.h"
#include "Receiver.h"
#include "ComplexCommand.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Invoker *invoker = new Invoker;
    invoker->setOnStart(new SimpleCommand("Say hi"));
    Receiver *receiver = new Receiver;
    invoker->setOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
    invoker->doSomethingInportant();

    /**
     * Command 是在invoker内部销毁的。
     */
    delete invoker;
    delete receiver;
    return 0;
}
