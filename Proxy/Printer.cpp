//
// Created by Luzh on 2020/4/29.
//

#include "Printer.h"
#include <iostream>
#include <unistd.h>

void Printer::heavyJob() {
    for (int i = 0; i < 5; i++) {
        sleep(1);
        std::cout << ".";
    }
    std::cout << std::endl;
}

Printer::Printer() {
    std::cout << "正在生成Printer的实例" << std::endl;
    heavyJob();
    std::cout << "生成实例结束." << std::endl;
}

void Printer::setPrinterName(string name) {
    this->mName = name;
}

string Printer::getPrinterName() {
    return this->mName;
}

void Printer::print() {
    std::cout << this->mName << std::endl;
}
