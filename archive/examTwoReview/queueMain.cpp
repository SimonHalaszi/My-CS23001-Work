#include "staticQueue.hpp"

// COMPILE W/ clang++ -Wall queueMain.cpp staticQueue.hpp

int main() {
    queue<char> myQ;
    
    if(myQ.isEmpty())
        std::cout << "Q is Empty!" << std::endl;
    if(myQ.isFull())
        std::cout << "Q is Full!" << std::endl;

    myQ.enqueue('S');

    if(myQ.isEmpty())
        std::cout << "Q is Empty!" << std::endl;
    if(myQ.isFull())
        std::cout << "Q is Full!" << std::endl;
    
    myQ.enqueue('J');  

    if(myQ.isEmpty())
        std::cout << "Q is Empty!" << std::endl;
    if(myQ.isFull())
        std::cout << "Q is Full!" << std::endl;

    myQ.enqueue('H');
    
    if(myQ.isEmpty())
        std::cout << "Q is Empty!" << std::endl;
    if(myQ.isFull())
        std::cout << "Q is Full!" << std::endl;

    // myQ.enqueue(4);
    
    // if(myQ.isEmpty())
    //     std::cout << "Q is Empty!" << std::endl;
    // if(myQ.isFull())
    //     std::cout << "Q is Full!" << std::endl;

    std::cout << myQ.dequeue() << std::endl;
    std::cout << myQ.dequeue() << std::endl;
    std::cout << myQ.dequeue() << std::endl;
    // std::cout << myQ.dequeue() << std::endl;

    if(myQ.isEmpty())
        std::cout << "Q is Empty!" << std::endl;
    if(myQ.isFull())
        std::cout << "Q is Full!" << std::endl;

}