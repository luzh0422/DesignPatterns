//
// Created by Luzh on 2020/4/29.
//

#ifndef PROXY_PROXY_H
#define PROXY_PROXY_H

#include <string>
#include "Printable.h"

class Proxy : public Printable{
private:
    string mName;
    Printable* real = NULL;
    void realize();

public:
    ~Proxy();
    void setPrinterName(string name) override ;
    std::string getPrinterName() override ;
    void print() override ;
};


#endif //PROXY_PROXY_H
