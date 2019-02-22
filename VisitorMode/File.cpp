//
// Created by Luzh on 2019/2/19.
//

#include "File.h"
#include "Visitor.h"

std::string File::getName() {
    return mName;
}

int File::getSize() {
    return mSize;
}

void File::accept(Visitor *visitor) {
    visitor->visit(this);
}

