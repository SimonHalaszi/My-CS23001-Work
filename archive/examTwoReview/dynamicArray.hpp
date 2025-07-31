#ifndef DARRAY_HPP_
#define DARRAY_HPP_

#include <iostream>

template<typename T>
class darray {
	public:
		darray();
		darray(int);
		darray(const darray<T>&);
		
		~darray();
		
		void swap(darray<T>&);
		darray<T>& operator=(darray<T>);
		
		T& operator[](int);
		T operator[](int) const;

		int capacity();
		void resize(int);
	private:
		T* arr;
		int cap;
};

template<typename T>
darray<T>::darray() {
	arr = 0;
	cap = 0;
}

template<typename T>
darray<T>::darray(int capSize) {
	cap = capSize;
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
	T* tempArr = arr;
	arr = rhs.arr;
	rhs.arr = tempArr;

	int tempCap = cap;
	cap = rhs.cap;
	rhs.cap = tempCap;
}

template<typename T>
darray<T>& darray<T>::operator=(darray<T> rhs) {
	swap(rhs);
	return *this;
}

template<typename T>
T darray<T>::operator[](int i) const {
	return arr[i];
}

template<typename T>
T& darray<T>::operator[](int i) {
	return arr[i];
}

template<typename T>
int darray<T>::capacity() {
	return cap;
}

template<typename T>
void darray<T>::resize(int newCap) {
	int smaller = cap;
	if(smaller > newCap) {
		smaller = newCap;
	}	

	T* tempArr = new T[newCap];
	for(int i = 0; i < smaller; i++) {
		tempArr[i] = arr[i];
	}	
	
	delete [] arr;
	arr = tempArr;
	cap = newCap;
}

template<typename T>
void printBack(const darray<T>& printMe, int i) {
	if(i > 0) {
		std::cout << printMe[i - 1];
		printBack(printMe, i - 1);
	}
}



#endif