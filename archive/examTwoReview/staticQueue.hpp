#ifndef QUEUE_HPP_
#define QUEUE_HPP_

#include <iostream>
#include <cassert>

const int size = 3;

template<typename T>
class queue {
    public:
        queue() : empt(true), full(false), enter(0), leave(0) {}

        void enqueue(const T&);
        T dequeue();

        bool isFull() const { return full; }
        bool isEmpty() const { return empt; }

    private:
        bool empt, full;
        int enter, leave;
        T q[size];
};

template<typename T>
void queue<T>::enqueue(const T& entering) {
    assert(full == false);
        
    q[enter] = entering;
    enter = (enter + 1) % size;
    empt = false;

    if(enter == leave) {
        full = true;
    }
}

template<typename T>
T queue<T>::dequeue() {
    assert(empt != true);
    
    T item = q[leave];
    leave = (leave + 1) % size;
    full = false;
    
    if(enter == leave) {
        empt = true;
    }
    
    return item;
}

#endif