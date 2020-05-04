#ifndef ITERATOR_H
#define ITERATOR_H

#include <utility>
#include <vector>
#include "node.h"

template <typename T> 
class Iterator {
public:
    explicit Iterator() {
        // TODO
    }

    explicit Iterator(Node<T>* node) {
        // TODO
    }

    Iterator<T>& operator=(const Iterator<T> &other) {          
        // TODO
    }

    bool operator!=(Iterator<T> other) {
        // TODO
    }

    Iterator<T>& operator++() {
        // TODO
    }

    pair<int, T> operator*() {
        // TODO
    }
};

#endif
