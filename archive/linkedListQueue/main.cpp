#include "queue.hpp"

#include <iostream>
#include <string>

int main() {
    queue<std::string> line;

    line.enqueue("Josh");
    line.enqueue("Bill");
    line.enqueue("Giovanni");
    line.enqueue("Rizzler");

    while(!line.isEmpty()) {
        std::cout << "Get your ticket, " << line.dequeue() << std::endl;
    }
}