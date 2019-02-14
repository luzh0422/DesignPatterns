//
// Created by Luzh on 2019/1/22.
// Hand类是猜拳游戏中表示手势的类, 该类内部保存着 "石头", "剪刀", "不" 的实例;
// 该类主要实现的功能主要包括 获取实例, 判断输赢;
//

#ifndef STRATEGYMODE_HAND_H
#define STRATEGYMODE_HAND_H

#include <vector>
#include <string>

class Hand {
private:
    std::vector<std::string> name = {"石头", "剪刀", "布"};
    int handValue;
    Hand(int value) : handValue(value) {}
    int fight(Hand* h);

public:
    static const int HANDVALUE_GUU = 0;
    static const int HANDVALUE_CHO = 1;
    static const int HANDVALUE_PAA = 2;
    static std::vector<Hand* > hands;
    bool isStrongerThan(Hand* h);
    bool isWeakerThan(Hand* h);
    static Hand* getHand(int index);
    std::string toString() {
        return name[handValue];
    }


};

#endif //STRATEGYMODE_HAND_H
