//
// Created by Luzh on 2018/10/22.
//

#ifndef ADAPTERMODE_PRINTBANNEROBJECT_H
#define ADAPTERMODE_PRINTBANNEROBJECT_H

#include "Print.h"
#include "Banner.h"
#include <string>

class PrintBannerObject : public Print {
public:
    PrintBannerObject(std::string mString) {
        pb = new Banner(mString);
    }
    ~PrintBannerObject() {
        delete pb;
        pb = NULL;
    }
    void printWeak() override;
    void printStrong() override;
private:
    Banner *pb;
};

#endif //ADAPTERMODE_PRINTBANNEROBJECT_H
