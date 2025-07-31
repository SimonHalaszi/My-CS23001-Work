#include "node.hpp"

int main() {
    node<int>* ptr;

    ptr = new node<int>(10);
    ptr->next = new node<int>(20);
}