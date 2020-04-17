//
// Created by Luzh on 2020/4/16.
//

#ifndef MEMENTO_GAMER_H
#define MEMENTO_GAMER_H

#include <vector>
#include <string>

class Memento;

class Gamer {
public:
    Gamer(int money): mMoney(money) {};
    int getMoney();
    void bet();
    Memento* createMemento();
    void restoreMemento(Memento* m);
    std::string getFruit();
    std::string toString();

private:
    int mMoney = 100;
    std::vector<std::string> fruitsname = {"苹果", "葡萄", "香蕉", "橘子"};
    std::vector<std::string> mFruits = {};
};


#endif //MEMENTO_GAMER_H
