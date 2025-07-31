// File: fileio.cpp
//
// CS II: File IO lab
//
// Compile: clang++ -Wall fileio.cpp -o fileio
// Usage:   ./fileio FILENAME

#include <iostream>
#include <fstream>

int main(int argc, char *argv[]) {

    { //Part 1 Count every character in file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        
        char ch = ' ';
        
        int count = 0;

        if (!inFile.eof()){
            inFile.get(ch);
            count++;
        }
        
        while (!inFile.eof()) {
            if (ch != '\n')
                std::cout << count << ": " << ch << std::endl;
            else
                std::cout << count << ": " << std::endl;
            inFile.get(ch);
            ++count;
        }

        --count;

        std::cout << "There were " << count << " characters in the file." << std::endl;

        std::cout << "Done with Part 1" << std::endl << std::endl;
        inFile.close();
    }

    { //Part 2 Count non white space character in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }

        char ch = ' ';

        int count = 0;

        if (!inFile.eof()){
            inFile >> ch;
            count++;
        }
        
        while (!inFile.eof()) {
            std::cout << count << ": " << ch << std::endl;
            inFile >> ch;
            ++count;
        }

        --count;

        std::cout << "There were " << count << " non-whitespace characters in the file." << std::endl;

        std::cout << "Done with Part 2" << std::endl << std::endl;
        inFile.close();
    }


    { //Part 3 Count number of words in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }

        const int wordSize = 50;        
        
        char ch[wordSize];

        int count = 0;

        if (!inFile.eof()){
            inFile >> ch;
            count++;
        }
        
        while (!inFile.eof()) {
            std::cout << count << ": " << ch << std::endl;
            inFile >> ch;
            ++count;
        }

        --count;

        std::cout << "There were " << count << " words in the file." << std::endl;
        std::cout << "Done with Part 3" << std::endl << std::endl;
        inFile.close();
    }


    { //Part 4 Count number lines in a file
        std::ifstream inFile(argv[1]);
        if (!inFile.is_open()) {
            std::cout << "Unable to open file: " << argv[1] << std::endl;
            exit(1);
        }
        
        const int lineSize = 200;

        char ch[lineSize];

        int count = 0;

        if (!inFile.eof()){
            inFile.getline(ch,lineSize);
            count++;
        }
        
        while (!inFile.eof()) {
            std::cout << count << ": " << ch << std::endl;
            inFile.getline(ch,lineSize);
            ++count;
        }

        --count;

        std::cout << "There were " << count << " lines in the file." << std::endl;

        std::cout << "Done with Part 4" << std::endl << std::endl;
        inFile.close();
    }

    return 0;
}
