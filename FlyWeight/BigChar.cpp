//
// Created by Luzh on 2020/4/28.
//

#include "BigChar.h"
#include <iostream>

BigChar::BigChar(char name) {
    switch (name) {
        case '0':
            this->fontData = "....######......\n" \
                             "..##......##....\n" \
                             "..##......##....\n" \
                             "..##......##....\n" \
                             "..##......##....\n" \
                             "..##......##....\n" \
                             "....######......\n" \
                             "................\n";
            break;
        case '1':
            this->fontData = "......##........\n" \
                             "..######........\n" \
                             "......##........\n" \
                             "......##........\n" \
                             "......##........\n" \
                             "......##........\n" \
                             "..##########....\n" \
                             "................\n";
            break;
        case '2':
            this->fontData = "....######......\n" \
                             "..##......##....\n" \
                             "..........##....\n" \
                             "......####......\n" \
                             "....##..........\n" \
                             "..##............\n" \
                             "..##########....\n" \
                             "................\n";
            break;
        case '3':
            this->fontData = "....######......\n" \
                             "..##......##....\n" \
                             "..........##....\n" \
                             "......####......\n" \
                             "..........##....\n" \
                             "..##......##....\n" \
                             "....######......\n" \
                             "................\n";
            break;
        case '4':
            this->fontData = "........##......\n" \
                             "......####......\n" \
                             "....##..##......\n" \
                             "..##....##......\n" \
                             "..##########....\n" \
                             "........##......\n" \
                             "......######....\n" \
                             "................\n";
            break;
        case '5':
            this->fontData = "..##########....\n" \
                             "..##............\n" \
                             "..##............\n" \
                             "..########......\n" \
                             "..........##....\n" \
                             "..##......##....\n" \
                             "....######......\n" \
                             "................\n";
            break;
        case '6':
            this->fontData = "....######......\n" \
                             "..##......##....\n" \
                             "..##............\n" \
                             "..########......\n" \
                             "..##......##....\n" \
                             "..##......##....\n" \
                             "....######......\n" \
                             "................\n";
            break;
        case '7':
            this->fontData = "..##########....\n" \
                             "..##......##....\n" \
                             "..........##....\n" \
                             "........##......\n" \
                             "......##........\n" \
                             "......##........\n" \
                             "......##........\n" \
                             "................\n";
            break;
        case '8':
            this->fontData = "....######......\n" \
                             "..##......##....\n" \
                             "..##......##....\n" \
                             "....######......\n" \
                             "..##......##....\n" \
                             "..##......##....\n" \
                             "....######......\n" \
                             "................\n";
            break;
        case '9':
            this->fontData = "....######......\n" \
                             "..##......##....\n" \
                             "..##......##....\n" \
                             "....########....\n" \
                             "..........##....\n" \
                             "..........##....\n" \
                             "....######......\n" \
                             "................\n";
            break;
        case '-':
            this->fontData = "................\n" \
                             "................\n" \
                             "................\n" \
                             "................\n" \
                             "..##########....\n" \
                             "................\n" \
                             "................\n" \
                             "................\n";
            break;
    }
}

void BigChar::print() const {
    std::cout << this->fontData << std::endl;
}

