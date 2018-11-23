//
// Created by Luzh on 2018/11/20.
//

#ifndef ABSTRACTFACTORYMODE_LISTTRAY_H
#define ABSTRACTFACTORYMODE_LISTTRAY_H

#include "AbstractTray.h"
#include <string>

using std::string;

class ListTray : public AbstractTray {
public:
    ListTray(string caption) : AbstractTray(caption) {}
    string makeHTML() override;
};

#endif //ABSTRACTFACTORYMODE_LISTTRAY_H
