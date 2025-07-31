#include "../string/string.hpp"
#include "../assembler/stack.hpp"
#include <iostream>
#include <fstream>

// Takes in an input file stream and converts its infix contents to postfix. Takes a string by reference to record orginal infix.
String infixToPostfix(std::ifstream&, String&);

// Takes a postfix expression and make a list of assembly instructions for it. Takes in a String with the expression and ostream&
void toAssembly(const String&, std::ostream&);

// Takes in a left string, operator, right string, counter, and ostream, to produce a set of assembly instructions in the ostream
// and to return next instruction back into toAssembly()
String evaluate(const String&, const String&, const String&, int&, std::ostream&);

// Determines if a token is an operator, made this a function because it looked cleaner that a big condition
bool isOp(const String&);

// Dertermines which operator a token is, made this a function because it looked cleaner than a switch statement inside of evaluate
String whichOp(const String&);

// Makes a integer into a string so that Count variable can be appended onto the TMP string
String intToString(int);