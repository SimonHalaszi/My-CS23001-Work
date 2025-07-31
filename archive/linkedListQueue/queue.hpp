#ifndef LINKEDLIST_QUEUE_HPP
#define LINKEDLIST_QUEUE_HPP

#include <cassert>
#include <new>

template<typename T>
class node {
    public:
        node() : next(0) {}
        node(const T& val) : data(val), next(0) {}
        T data;
        node<T>* next;
};

template<typename T>
class queue {
    public:
        // Default Constructor
        queue() : begin(0), end(0) {}
        // Destructor
        ~queue();
        // Copy Constructor
        queue(const queue<T>&);
        // Swap for Assignment Overloading
        void swap(queue<T>&);
        // Assignment Overloading
        queue<T>& operator=(queue<T> rhs) { swap(rhs); return *this; }

        // Bool for if Queue is Empty
        bool isEmpty() const { return begin == 0 && end == 0; }
        // Bool for if Queue is Full
        bool isFull() const;

        // Function for Entering a Value into Queue
        void enqueue(const T&);
        // Function for Taking a Value Out of Queue
        T dequeue();

    private:
        node<T>* begin;
        node<T>* end;
};

template<typename T>
void queue<T>::enqueue(const T& val) {
    assert(!isFull());
    if(isEmpty()) {
        end = new node<T>(val);
        begin = end;
    } else {
        end->next = new node<T>(val);
        end = end->next;
    }
}

template<typename T>
T queue<T>::dequeue() {
    assert(!isEmpty());
    
    node<T>* temp = begin;
    T data = begin->data;
    
    begin = begin->next;
    if(begin == 0) {
        end = 0;
    }
    
    delete temp;
    return data;
}

template<typename T>
queue<T>::~queue() {
    node<T>* temp;
    while(begin != 0) {
        temp = begin;
        begin = begin->next;
        delete temp;
    }
}

template<typename T>
queue<T>::queue(const queue<T>& copy) {
    node<T>* temp = copy.begin;
    while(temp != 0) {
        if(begin == 0) {
            end = new node<T>(temp->data);
            begin = end;
        } else {
            end->next =  new node<T>(temp->data);
            end = end->next;
        }
        temp = temp->next;
    }
}

template<typename T>
void queue<T>::swap(queue<T>& rhs) {
    node<T>* temp = rhs.begin;
    rhs.begin = begin;
    begin = temp;

    temp = rhs.end;
    rhs.end = end;
    end = temp;
}

template<typename T>
bool queue<T>::isFull() const {
    node<T>* ptr = new(std::nothrow) node<T>();
    if(ptr == 0) { 
        return true; 
    }
    delete ptr;
    return false;
}



#endif