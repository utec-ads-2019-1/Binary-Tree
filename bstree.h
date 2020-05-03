#ifndef BSTREE_H
#define BSTREE_H

#include "node.h"
#include "iterator.h"

template <typename T> 
class BSTree {
    private:
        Node<T> *root;

    public:
        BSTree() : root(nullptr) {};

        bool insert(int, T) {
            // TODO: Inserts an element with a key (a repeat key replaces the value)
        }

        bool remove(int) {
            // TODO: Removes an element with a certain key
        }

        bool hasKey(int) const { 
            // TODO: Looks for a key in the tree
        } 

        T operator[](int) {
            // TODO: Gets the element with a certain key 
            // NOTE: For 1+ point, research if it is possible to update the node with this same function (like insert, e.g. tree[2] = "hola")
        }

        int size() const {
            // TODO: Amount of nodes
        }

        bool empty() const {
            // TODO: If the tree is empty
        }

        void traversePreOrder() {
            // TODO
        }

        void traverseInOrder() {
            // TODO
        }

        void traversePostOrder() {
            // TODO
        }

        Iterator<T> begin() {
            // TODO
        }

        Iterator<T> end() { 
            // TODO
        }

        ~BSTree() {
            // TODO
        }
};

#endif
