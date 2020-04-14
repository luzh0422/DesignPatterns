//
// Created by Luzh on 2020/4/13.
//

#include "GenerateNumber.h"

void GenerateNumber::addObserver(Observer *ob) {
    this->observers.push_back(ob);
}

void GenerateNumber::deleteObserver(Observer *ob) {
    for (auto it = observers.begin(); it != observers.end(); it++) {
        if (*it == ob) {
            observers.erase(it);
        }
    }
}

int GenerateNumber::getNumber() {
    return this->mNumber;
}

void GenerateNumber::notifyObeserves() {
    for(auto it = observers.begin(); it != observers.end(); it++) {
        (*it)->apply(this);
    }
}
