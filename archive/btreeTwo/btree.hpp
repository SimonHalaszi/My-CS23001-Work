#ifndef CS2_BTREE_BNODE_HPP
#define CS2_BTREE_BNODE_HPP

#include <iostream>

template<typename T> class bnode;

template<typename T>
class btree {
    public:
        btree() : root(nullptr) {}
        btree(const btree<T>&);
        void swap(btree<T>&);
        btree<T>& operator=(btree<T> rhs) { swap(rhs); return *this; }
        ~btree();
        
        void binsert(const T&);
        void bremove(const T&);
        bool find(const T&) const;
        // void inorder(std::ostream&);

        bool isEmpty() const;

    private:
        bnode<T>* root;
};

template<typename T> 
class bnode {
    public:
        bnode() : left(nullptr), right(nullptr) {}
        bnode(const T& val) : left(nullptr), right(nullptr), data(val) {}
        bnode(const bnode<T>&);
        ~bnode();

        void binsert(const T&);
        bnode<T>* bremove(const T&);
        bool find(const T&) const;
        // void inorder(std::ostream&);
        
        T predecessor() const;

    private:
        T data;
        bnode<T>* left;
        bnode<T>* right;
};

template<typename T>
bool btree<T>::find(const T& value) const {
    if(!root) {
        return false;
    }
    return root->find(value);
}

template<typename T>
bool bnode<T>::find(const T& value) const {
    if(value == data) {
        return true;
    } else if (value < data) {
        if(left) {
            left->find(value);
        } else {
            return false;
        }
    } else {
        if(right) {
            right->find(value);
        } else {
            return false;
        }
    }
}

template<typename T>
void btree<T>::binsert(const T& value) {
    if(root) {
        root->binsert(value);
    } else {
        root = new bnode<T>(value);
    }
}

template<typename T>
void bnode<T>::binsert(const T& value) {
    if(value == data) {
        return;
    } else if(value < data) {
        if(left) {
            left->binsert(value);
        } else {
            left = new bnode<T>(value);
        }
    } else {
        if(right) {
            right->binsert(value);
        } else {
            right = new bnode<T>(value);
        }
    }
}

template<typename T>
void btree<T>::bremove(const T& value) {
    if(find(value)) {
        root->bremove(value);
    }
}

template<typename T>
bnode<T>* bnode<T>::bremove(const T& value) {
    if(value == data) {
        // Leaf node / No children
        if(left == nullptr && right == nullptr) {
            delete this;
            return nullptr;
        // A right child
        } else if(left == nullptr && right != nullptr) {
            bnode<T>* temp = right;
            right = nullptr;
            delete this;
            return temp;
        // A left child
        } else if (left != nullptr && right == nullptr) {
            bnode<T>* temp = left;
            right = nullptr;
            delete this;
            return temp;  
        // Two children          
        } else if (left != nullptr && right != nullptr) {
        data = left->predecessor();
        left = left->bremove();
        return this;
        }
    } else if (value < data) {
        left = left->bremove(value);
    } else {
        right = right->bremove(value);
    }
    return *this;
}

template<typename T>
T bnode<T>::predecessor() const {
    if (right) {
        return right->predecessor();
    }
    return data;
}

template<typename T>
btree<T>::~btree() {
    if(root) { 
        delete root;
    }
}

template<typename T>
bnode<T>::~bnode() {
    if(left) {
        delete left;
    } else if (right) {
        delete right;
    }
}

template<typename T>
btree<T>::btree(const btree<T>& actual) {
    if(actual.root) {
        root = new bnode<T>(actual.root);
    }
}

template<typename T>
bnode<T>::bnode(const bnode<T>& actual) {
    data = actual.data;
    if(actual.left) {
        left = new bnode<T>(actual.left);
    }
    if(actual.right) {
        right = new bnode<T>(actual.right);
    }
}

#endif