#include "utilities.hpp"

int main(int argc, char *argv[]) {
    
    // Defining Streams
    std::ifstream inpFile(argv[1]);
    
    std::ofstream outFile;
    if(argc == 3) {
        outFile.open(argv[2]);
    }

    // If input file didnt open thats not good.
    if (!inpFile.is_open()) {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        exit(1);
    }

    String postfixExpr;
    String infixExpr;
    
    // Calls infix to postfix function which takes the ifstream by reference and a string to store initial expression.
    // Else statement for whether we are printing to terminal or to a file.

    if(argc != 3) {
        while(!inpFile.eof()) {
            postfixExpr = infixToPostfix(inpFile, infixExpr);
            if(postfixExpr != "eof") {
                std::cout << "Infix   Expression: " << infixExpr << std::endl;
                std::cout << "Postfix Expression: " << postfixExpr << std::endl << std::endl;
            }
            infixExpr = String();
        }
    } else {
        while(!inpFile.eof()) {
            postfixExpr = infixToPostfix(inpFile, infixExpr);
            if(postfixExpr != "eof") {
                outFile << "Infix   Expression: " << infixExpr << std::endl;
                outFile << "Postfix Expression: " << postfixExpr << std::endl << std::endl;
            }
            infixExpr = String();
        }
        outFile.close();        
    }

    inpFile.close();
}