// File: fileio2.cpp
//
// CS II: File IO lab
//
// Compile: clang++ -Wall fileio2.cpp -o fileio
// Usage:   ./fileio FILENAME

#include <iostream>
#include <fstream>

//Part 5 
//Read in a integer that is the number of lines to read
//Each line has only one word on it.
//Use data3.txt

int main(int argc, char *argv[]) {
    std::ifstream inFile(argv[1]);
    
    if (!inFile.is_open()) {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        exit(1);
    }

    int LinesToRead;
    inFile >> LinesToRead;

    const int lineSize = 200;

    std::cout << "We have " << LinesToRead << " lines to read." << std::endl;

    char ch[lineSize];

    // Taking in empty first line that had number
    if (!inFile.eof())
        inFile.getline(ch,lineSize);
   
   // Taking in next line that isnt empty
    if (!inFile.eof())
        inFile.getline(ch,lineSize);
        
    int count = 1;

    // This is here in case of a file in which its just a number and there is no next line.
    if(inFile.eof() && count <= LinesToRead){
        for(int i = count; i <= LinesToRead; ++i){
            std::cout << count << ": " << std::endl;
            ++count;
        }
    }

    while (!inFile.eof() && count <= LinesToRead) {
        
        std::cout << count << ": " << ch << std::endl;
        
        inFile.getline(ch,lineSize);
        ++count;
        
        if(inFile.eof() && count <= LinesToRead){
            for(int i = count; i <= LinesToRead; ++i){
                std::cout << count << ": " << std::endl;
                ++count;
            }
            std::cout << "There were more lines to read than actual lines of text. Empty lines were printed." << std::endl;
            break;
        }
    }

    std::cout << "Done with Part 5" << std::endl << std::endl;
    inFile.close();
    return 0;
}
