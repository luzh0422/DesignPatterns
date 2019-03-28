//
// Created by Luzh on 2019-03-15.
//

#ifndef FACADEMODE_PAGEMAKER_H
#define FACADEMODE_PAGEMAKER_H

#include <string>

class PageMaker {
private:
    PageMaker() {}

public:
    static void makeWelcomePage(std::string mailaddr, std::string fileName);
};


#endif //FACADEMODE_PAGEMAKER_H
