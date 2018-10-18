//
// Created by Luzh on 2018/10/18.
//

#include "BookShelfIterator.h"

bool BookShelfIterator::hasNext() {
    if (index < mAggreate->getLength()) {
        return true;
    } else {
        return false;
    }
}

std::string BookShelfIterator::next() {

}
