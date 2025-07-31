#include "btree.hpp"
#include <iostream>

int main() {
    btree<char> tree;

    tree.binsert('D');
    tree.binsert('O');
    tree.binsert('A');
    tree.binsert('B');

    tree.inorder(std::cout);


}