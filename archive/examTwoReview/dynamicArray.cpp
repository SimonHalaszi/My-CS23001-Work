#include "dynamicArray.hpp"
// COMPILE: clang++ -Wall dynamicArray.hpp dynamicArray.cpp

int main() {
    {
        darray<int> array(6);
        
        std::cout << "--- dArray<int> array(6) ---" << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array.resize(8);

        std::cout << "- array.resize(8): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array.resize(5);
        
        std::cout << "- array.resize(5): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array = darray<int>(8);

        std::cout << "- array = dArray<int>(8): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;
    }
    {
        darray<char> array(3);
        
        std::cout << "--- dArray<char> array(3) --- " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array.resize(8);

        std::cout << "- array.resize(8): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array.resize(5);
        
        std::cout << "- array.resize(5): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array = darray<char>(26);

        std::cout << "- array = dArray<char>(8): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;
    }
    {
        darray<bool> array(12);
        
        std::cout << "--- dArray<bool> array(12) --- " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array.resize(16);

        std::cout << "- array.resize(16): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array.resize(5);
        
        std::cout << "- array.resize(5): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;

        array = darray<bool>(10);

        std::cout << "- array = dArray<bool>(8): " << std::endl;
        std::cout << "Back to Front: "; printBack(array, array.capacity()); std::cout << std::endl;
    }
}