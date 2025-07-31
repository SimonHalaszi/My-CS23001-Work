#include "utilities.hpp"

int main(int argc, char *argv[]) {
    
    // Defining Streams
    std::ifstream inpFile(argv[1]);
    
    std::ostream* out = &std::cout;
    std::ofstream outFile;
    
    if (argc == 3) {
        outFile.open(argv[2]);
        if (!outFile.is_open()) {
            std::cout << "Unable to open output file: " << argv[2] << std::endl;
            return 1;
        }
        out = &outFile;
    }

    // If input file didnt open thats not good.
    if (!inpFile.is_open()) {
        std::cout << "Unable to open file: " << argv[1] << std::endl;
        return 1;
    }

    String postfixExpr;
    String infixExpr;

    while(!inpFile.eof()) {
        postfixExpr = infixToPostfix(inpFile, infixExpr);
        if(postfixExpr != "eof") {
            (*out) << "Infix   Expression: " << infixExpr << std::endl;
            (*out) << "Postfix Expression: " << postfixExpr << std::endl << std::endl;
            toAssembly(postfixExpr, (*out));
            (*out) << std::endl;
        }
        infixExpr = String();
    }

    if(outFile.is_open()) {
        outFile.close(); 
    }      

    inpFile.close();
}