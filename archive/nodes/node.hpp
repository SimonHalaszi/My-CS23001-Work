#ifndef LINKED_NODE_HPP
#define LINKED_NODE_HPP

template<typename T>
class node{
    public:
        node() : next(0) {}
        node(const T& val) : data(val), next(0) {}
        T data;
        node<T>* next;
};



#endif