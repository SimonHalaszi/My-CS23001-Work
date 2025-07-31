#include "../string/string.hpp"
#include "../assembler/stack.hpp"
#include <vector>
#include <iostream>
#include <fstream>

// To Compile clang++ -Wall ../string/string.hpp ../string/string.cpp ../assembler/stack.hpp infix2prefix.cpp
// To Execute ./a.out data3-1.txt

String infixToPrefix(std::vector<String> expr);

int main(int argc, char *argv[]) {
    std::ifstream inFile(argv[1]);
    
    if (!inFile.is_open()) {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        exit(1);
    }

    char temp[128];
    
    while(inFile.getline(temp, 128, ';')) {   
        String line = temp;

        // If bad line was read in
        if (line[(line.length() - 1)] != ' ') {
            break;
        }

        std::vector<String> expr = line.split(' ');
        String S = infixToPrefix(expr);
        
        for(int i = 0; i < S.length(); ++i) {
            std::cout << S[i];
        }

        std::cout << std::endl;
    }
}

String infixToPrefix(std::vector<String> expr) {
    stack<String> S;

    std::vector<String>::iterator it = expr.begin();

    String rhs;
    String op;
    String lhs;
    String t;

    while(it != expr.end()) {
        t = *it;
        if ( t == ')') {
            rhs = S.pop();
            op = S.pop();
            lhs = S.pop();
            S.push(op + ' ' + lhs + ' ' + rhs);
        } else if (t != '(') {
            S.push(t);
        }
        ++it;
    }

    S.pop();
    
    return S.pop();
}