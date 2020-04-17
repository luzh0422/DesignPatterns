//
// Created by Luzh on 2020/4/16.
//

#ifndef MEMENTO_MEMENTO_H
#define MEMENTO_MEMENTO_H

#include <vector>
#include <string>

class Memento {
    friend class Gamer;
public:
    int getMoney();
private:
    Memento(int money) : mMoney(money), mFruits({}) {};
    void addFruit(std::string fruit);
    std::vector<std::string> getFruits();

    int mMoney;
    std::vector<std::string> mFruits = {};
};


#endif //MEMENTO_MEMENTO_H
