#include "queue.hpp"

int main() {
    queue<int> list;
    list.enqueue(1);
    list.enqueue(2);
    list.enqueue(3);

    std::cout << list << std::endl;

    queue<int> wow;
    for(int i = 0; i < SIZE; ++i) {
        wow.enqueue(i);
        std::cout << wow << std::endl;
    }

    for(int j = 0; j < SIZE - 1; ++j) {
        wow.dequeue();
        std::cout << wow << std::endl;
    }    
}