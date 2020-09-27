#ifndef BSTREE_H
#define BSTREE_H

#include "node.h"
#include "iterator.h"

template <typename T> 
class BSTree {
    Node<T>* root;

public:
    BSTree() : root(nullptr) {};

    bool insert(int key, T data) {
        // TODO: Inserts an element with a key (a repeated key replaces the value)
    }

    bool remove(int) {
        // TODO: Removes an element with a certain key
    }

    bool hasKey(int) { 
        // TODO: Looks for a key in the tree
    } 

    T operator[](int) {
        // TODO: Gets the element with a certain key and update
        // TODO: It can also insert or update a node (like insert, e.g. tree[2] = "hola") 
        // NOTE: Create a different function or modify the method signature if necessary
    }

    int size() {
        // TODO: Amount of nodes
    }

    int height() {
        // TODO: Height of the tree
    }

    bool empty() const {
        // TODO: If the tree is empty
    }

    void traversePreOrder() {
        // TODO: Print the tree in pre-order
    }

    void traverseInOrder() {
        // TODO: Print the tree in in-order
    }

    void traversePostOrder() {
        // TODO: Print the tree in post-order
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
