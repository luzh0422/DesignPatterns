//
// Created by Luzh on 2020/4/29.
//

#ifndef PROXY_PRINTABLE_H
#define PROXY_PRINTABLE_H

#include <string>

using namespace std;

class Printable {
public:
    virtual void setPrinterName(string name) = 0;
    virtual string getPrinterName() = 0;
    virtual void print() = 0;
};

#endif //PROXY_PRINTABLE_H
