//
// Created by Luzh on 2020/4/14.
//

#include "RandomGenerateNumber.h"

void RandomGenerateNumber::generateNumber() {
    this->mNumber = random() % 50;
    this->notifyObeserves();
}
