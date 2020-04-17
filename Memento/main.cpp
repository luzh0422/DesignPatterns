#include <iostream>

#include "Gamer.h"
#include "Memento.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Gamer* gamer = new Gamer(400);
    Memento* memento = gamer->createMemento();
    for (int i = 0; i < 50; i++) {
        std::cout << "当前状态: " << gamer->toString() << std::endl;
        gamer->bet();
        if (gamer->getMoney() > memento->getMoney()) {
            std::cout << "所持金钱增加了许多,因此保存游戏当前的状态" << std::endl;
            memento = gamer->createMemento();
        } else if (gamer->getMoney() < memento->getMoney() / 2) {
            std::cout << "所持金钱减少了许多,因为将游戏状态恢复到以前的状态" << std::endl;
        }
    }
    return 0;
}
