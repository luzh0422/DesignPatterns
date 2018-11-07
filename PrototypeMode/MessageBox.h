//
// Created by Luzh on 2018/11/1.
//

#ifndef PROTOTYPEMODE_MESSAGEBOX_H
#define PROTOTYPEMODE_MESSAGEBOX_H

#include "Product.h"
#include <string>
#include <iostream>

using std::string;

class MessageBox : public Product {
public:
    MessageBox(std::string decochar) : mDecochar(decochar) {}
    MessageBox(const MessageBox& m) {
        std::cout << "拷贝构造函数" << std::endl;
        mDecochar = m.mDecochar;
    }

    void use(string str) override;
    Product* createClone() override;

private:
    std::string mDecochar;

};

#endif //PROTOTYPEMODE_MESSAGEBOX_H
