#ifndef ITERATOR_H
#define ITERATOR_H

#include <utility>
#include "node.h"

template <typename T> 
class Iterator {
    private:
        Node<T> *current;

    public:
        Iterator() {
            // TODO
        }

        Iterator(Node<T> *node) {
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

        pair<int, int>* operator->() { 
            // TODO
        }
};

#endif
