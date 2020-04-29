//
// Created by Luzh on 2020/4/29.
//

#ifndef PROXY_PRINTER_H
#define PROXY_PRINTER_H

#include <string>

#include "Printable.h"

class Printer : public Printable{
private:
    string mName = "";
    void heavyJob();
public:
    Printer();
    void setPrinterName(string name) override ;
    string getPrinterName() override ;
    void print() override ;
};


#endif //PROXY_PRINTER_H
