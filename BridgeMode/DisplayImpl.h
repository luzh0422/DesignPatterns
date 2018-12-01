//
// Created by Luzh on 2018/12/1.
//

#ifndef BRIDGEMODE_DISPLAYIMPL_H
#define BRIDGEMODE_DISPLAYIMPL_H

class DisplayImpl {
public:
    virtual void rawOpen() = 0;
    virtual void rawPrint() = 0;
    virtual void rawClose() = 0;
};

#endif //BRIDGEMODE_DISPLAYIMPL_H
