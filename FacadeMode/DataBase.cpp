//
// Created by Luzh on 2019-03-07.
//

#include "DataBase.h"
#include <fstream>
#include <iostream>

std::map<std::string, std::string> DataBase::getProperties(std::string fileName) {
    std::map<std::string, std::string> data;
    std::fstream infile;
    infile.open("/Users/luzh/nodeAddon/DesignPatterns/FacadeMode/" + fileName);
    std::string s;
    while(!infile.eof()) {
        getline(infile, s);
        std::string::size_type pos = s.find("=");
        std::string key = s.substr(0, pos);
        std::string value = s.substr(pos + 1);
        data.insert(std::map<std::string, std::string>::value_type(key, value));
    }
    return data;
}
