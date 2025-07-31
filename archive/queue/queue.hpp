#ifndef QUEUE_HPP_
#define QUEUE_HPP_

#include <iostream>
#include <cassert>

const int SIZE = 10;

template<typename T>
class queue {
    public:
        queue() : front(0), back(0), empty(true) {}

        bool isEmpty() const { return empty; }
        bool isFull() const { return front == back && !empty; }
        void enqueue(const T&);
        T dequeue();

    private:
        int front, back;
        bool empty;
        T q[SIZE];
};

template<typename T>
void queue<T>::enqueue(const T& item) {
    assert(!isFull());
    q[back] = item;
    back = (back + 1) % SIZE;
    empty = false;
}

template<typename T>
T queue<T>::dequeue() {
    assert(!empty);
    T item = q[front];
    front = (front + 1) % SIZE;
    if(front == back) {
        empty = true;
    }
    return item;
}

#endif