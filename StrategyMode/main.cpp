#include <iostream>
#include "Hand.h"
#include "Player.h"
#include "ProbStrategy.h"
#include "WinningStrategy.h"
#include "Strategy.h"
#include <iostream>

int main() {
    Strategy* winningStrategy = new WinningStrategy();
    Player player1 = Player("Taro", winningStrategy);
    Strategy* probStrategy = new WinningStrategy();
    Player player2 = Player("Hana", probStrategy);
    for (int i = 0; i < 1000; i++) {
        Hand* hand1 = player1.nextHand();
        Hand* hand2 = player2.nextHand();
        if (hand1->isStrongerThan(hand2)) {
            player1.win();
            player2.lose();
        } else if (hand1->isWeakerThan(hand2)) {
            player1.lose();
            player2.win();
        } else {
            player1.even();
            player2.even();
        }
    }
    std::cout << "The result is : " << std::endl;
    player1.toString();
    player2.toString();
    return 0;
}