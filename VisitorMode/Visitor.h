//
// Created by Luzh on 2019/2/19.
//

#ifndef VISITORMODE_VISITOR_H
#define VISITORMODE_VISITOR_H

#include "File.h"
#include "Directory.h"


class Visitor {
public:
    virtual void visit(File *file) = 0;
    virtual void visit(Directory *directory) = 0;
};

#endif //VISITORMODE_VISITOR_H
