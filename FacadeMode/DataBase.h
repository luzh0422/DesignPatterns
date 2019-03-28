//
// Created by Luzh on 2019-03-07.
//

#ifndef FACADEMODE_DATABASE_H
#define FACADEMODE_DATABASE_H

#include <map>
#include <string>

typedef std::map<std::string, std::string> Properties;

class DataBase {
public:
    static Properties getProperties(std::string fileName);

private:
    DataBase() {}
};


#endif //FACADEMODE_DATABASE_H
