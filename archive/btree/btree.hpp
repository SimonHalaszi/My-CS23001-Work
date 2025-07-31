#ifndef BTREE_HPP
#define BTREE_HPP

#include <iostream>

template<typename T>
class btree {
    public:
        btree() : empty(true), left(0), right(0) {}
        btree(const T& val) : data(val), empty(false), left(0), right(0) {}
        btree(const btree<T>&);

        void swap(btree<T>&);
        btree<T>& operator=(btree<T> rhs) { swap(rhs); return *this; }

        ~btree();

        void binsert(const T&);
        
        void inorder(std::ostream&) const;
        void preorder(std::ostream&) const;
        void postorder(std::ostream&) const;

        bool find(const T&) const;

        bool isEmpty() const { return empty; }

    private:
        T data;
        bool empty;
        btree<T>* left;
        btree<T>* right;
};

template<typename T>
void btree<T>::binsert(const T& item) {
    if(item == data) {
        return;
    }

    if(empty) {
        data = item;
        empty = false;
    }

    if(item < data) {
        if(left) {
            left->binsert(item);
        } else {
            left = new btree<T>(item);
        }
    } else {
        if(right) {
            right->binsert(item);
        } else {
            right = new btree<T>(item);
        }
    }
}

template<typename T>
bool btree<T>::find(const T& key) const {
    if(key == data) {
        return true;
    }
    
    if(empty) {
        return false;
    }

    if(key < data) {
        if(left) {
            return left->find(key);
        } else {
            return false;
        }
    } else {
        if(right) {
            return left->find(key);
        } else {
            return false;
        }
    }
}

template<typename T>
btree<T>::btree(const btree<T>& copy) {
    // ACTION
    data = copy.data;
    empty = copy.empty;
    // LEFT
    if(copy.left) {
        left = new btree<T>(*(copy.left));
    }
    // RIGHT
    if(copy.right) {
        right = new btree<T>(*(copy.right));
    }
}

template<typename T>
btree<T>::~btree() {
    // LEFT
    if(left) {
        delete left;
    }
    // RIGHT
    if(right) {
        delete right;
    }
}

template<typename T>
void btree<T>::swap(btree<T>& rhs) {
    bool tempEmpty = empty;
    empty = rhs.empty;
    rhs.empty = tempEmpty;

    T tempData = data;
    data = rhs.data;
    rhs.data = tempData;

    btree<T>* tempLeft = left;
    left = rhs.left;
    rhs.left = tempLeft;

    btree<T>* tempRight = right;
    right = rhs.right;
    rhs.right = tempRight;
}

template<typename T>
void btree<T>::inorder(std::ostream& out) const {
    // LEFT
    if(left) {
        left->inorder(out);
    }
    // ACTION
    out << data << " ";
    // RIGHT
    if(right) {
        right->inorder(out);
    }
}

template<typename T>
void btree<T>::postorder(std::ostream& out) const {
    // LEFT
    if(left) {
        left->inorder(out);
    }
    // RIGHT
    if(right) {
        right->inorder(out);
    }    
    // ACTION
    out << data << " ";
}

template<typename T>
void btree<T>::preorder(std::ostream& out) const {
    // ACTION
    out << data << " ";    
    // LEFT
    if(left) {
        left->inorder(out);
    }
    // RIGHT
    if(right) {
        right->inorder(out);
    }    
}

#endif