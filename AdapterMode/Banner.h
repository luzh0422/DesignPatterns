//
// Created by Luzh on 2018/10/22.
//

#ifndef ADAPTERMODE_BANNER_H
#define ADAPTERMODE_BANNER_H

#include <string>

class Banner {
public:
    Banner(std::string pString) : mString(pString) {}
    void printWithPattern();
    void printWithAsterisk();

private:
    std::string mString;
};

#endif //ADAPTERMODE_BANNER_H
