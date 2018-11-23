//
// Created by Luzh on 2018/11/19.
//

#include "AbstractTray.h"

void AbstractTray::addItem(AbstractItem* abstractItem) {
    mItems.push_back(abstractItem);
}

