//
// Created by Luzh on 2018/11/19.
//

#ifndef ABSTRACTFACTORYMODE_ABSTRACTTRAY_H
#define ABSTRACTFACTORYMODE_ABSTRACTTRAY_H

#include "./AbstractItem.h"
#include <vector>
#include <string>

class AbstractTray : public AbstractItem {
public:
    AbstractTray(std::string caption) : AbstractItem(caption), mCaption(caption) {}
    void addItem(AbstractItem*);

protected:
    std::vector<AbstractItem* > mItems;
    std::string mCaption;
};

#endif //ABSTRACTFACTORYMODE_ABSTRACTTRAY_H
