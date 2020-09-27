#ifndef NODE_H
#define NODE_H

template <typename T>
class BSTree; 

template <typename T>
class Iterator; 

template <typename T>
class Node {
    int key;    
    T data;
    Node<T>* left;
    Node<T>* right;

    template<typename>
    friend class BSTree; 

    template<typename>
    friend class Iterator; 
};

#endif