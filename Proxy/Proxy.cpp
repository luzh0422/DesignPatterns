//
// Created by Luzh on 2020/4/29.
//

#include "Proxy.h"
#include "Printer.h"

Proxy::~Proxy() {
    if (this->real != NULL) {
        delete this->real;
        this->real = NULL;
    }
}

void Proxy::realize() {
    if (this->real == NULL) {
        this->real = new Printer();
    }
    this->real->setPrinterName(mName);
}

void Proxy::setPrinterName(string name) {
    this->mName = name;
}

std::string Proxy::getPrinterName() {
    return this->mName;
}

void Proxy::print() {
    this->realize();
    this->real->print();
}
