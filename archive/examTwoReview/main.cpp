#include <iostream>

void printBack(const int table[], int size) {
    if(size > 0) {
        std::cout << table[size - 1] << ",";
        printBack(table, size - 1);
    }
}

int main() {
    int table[4] = {1, 2, 3, 4};
    printBack(table, 4);
    std::cout << std::endl;

    int x = 5;
    std::cout << x << std::endl;
    int* ptr;
    ptr = &x;
    *ptr = 10;
    std::cout << x << std::endl;
}

template<typename T>
class darray{
	public:
        darray();
        darray(int);
        darray(const darray<T>&);

        ~darray();

        void swap(darray<T>&);
        darray<T>& operator=(darray<T>);

        void resize(int);
	private:
        T* arr;
        int cap;
};

template<typename T>
darray<T>::darray() {
    cap = 0;
    arr = 0;
}

template<typename T>
darray<T>::darray(int setCap) {
    cap = setCap;
    arr = new T[cap];
}

template<typename T>
darray<T>::darray(const darray<T>& copy) {
    cap = copy.cap;
    arr = new T[cap];
    for(int i = 0; i < cap; ++i) {
        arr[i] = copy.arr[i];
    }
}

template<typename T>
darray<T>::~darray() {
    delete [] arr;
}

template<typename T>
void darray<T>::swap(darray<T>& rhs) {
    int tempCap = cap;
    cap = rhs.cap;
    rhs.cap = tempCap;

    T* tempArr = arr;
    arr = rhs.arr;
    rhs.arr = tempArr;
}

template<typename T>
darray<T>& darray<T>::operator=(darray<T> rhs) {
    swap(rhs);
    return *this;
}

template<typename T>
void darray<T>::resize(int newCap) {
    int smaller = cap;
    if(smaller > newCap) {
        smaller = newCap;
    }

    T* tempArr = new T[newCap];
    for(int i = 0; i < smaller; ++i) {
        tempArr[i] = arr[i];
    }

    cap = newCap;
    delete [] arr;
    arr = tempArr;
}