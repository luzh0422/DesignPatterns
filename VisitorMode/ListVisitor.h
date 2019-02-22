//
// Created by Luzh on 2019/2/21.
//

#ifndef VISITORMODE_LISTVISITOR_H
#define VISITORMODE_LISTVISITOR_H

#include "Visitor.h"
#include <string>

class ListVisitor : public Visitor{
public:
    void visit(File *file) override;
    void visit(Directory *directory) override;
private:
    std::string currentDir = "";
};


#endif //VISITORMODE_LISTVISITOR_H
