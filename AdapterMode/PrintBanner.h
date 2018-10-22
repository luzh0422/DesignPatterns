//
// Created by Luzh on 2018/10/22.
//

#ifndef ADAPTERMODE_PRINTBANNER_H
#define ADAPTERMODE_PRINTBANNER_H

#include "Print.h"
#include "Banner.h"
#include <string>

class PrintBanner : public Banner, public Print {
public:
    PrintBanner(std::string pString) : Banner(pString) {}
    void printWeak();
    void printStrong();
};

#endif //ADAPTERMODE_PRINTBANNER_H
