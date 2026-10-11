#include <iostream>
int main() {
    // Arithmetic operators are used to perform mathematical operations on variables and values.
    //Different Types of Arithmetic Operators are + - * / %
    // + Addition operator is used to add two operands.
    // - Subtraction operator is used to subtract the right operand from the left operand.
    // * Multiplication operator is used to multiply two operands.
    // / Division operator is used to divide the left operand by the right operand. 
    // % Modulus operator is used to find the remainder of the division of the left operand by the right operand.
    // The modulus operator can only be used with integer operands.
    // The division operator can be used with both integer and floating-point operands.
    
    /*
    Priority order of arithmetic operators is as follows:
    1. Parentheses ()
    2. Multiplication (*) and Division (/) and Modulus (%)
    3. Addition (+) and Subtraction (-)
    */
    int a = 10;
    int b = 5;
    int c;
    a++;  // Post-increment operator
    b--;  // Post-decrement operator
    std::cout << "Value of a after post-increment: " << a << std::endl;
    std::cout << "Value of a after post-decrement: " << a << std::endl;
    c = a + b;  // Addition
    std::cout << "Addition: " << c << std::endl;
    // variable++ is a post-increment operator. It increases the value of the variable by 1 after the current expression is evaluated.
    // ++variable is a pre-increment operator. It increases the value of the variable by 1 before the current expression is evaluated.
    c = a - b;  // Subtraction
    std::cout << "Subtraction: " << c << std::endl;
    // variable-- is a post-decrement operator. It decreases the value of the variable by 1 after the current expression is evaluated.
    // --variable is a pre-decrement operator. It decreases the value of the variable by 1 before the current expression is evaluated.
    c = a * b;  // Multiplication
    std::cout << "Multiplication: " << c << std::endl;

    c = a / b;  // Division
    std::cout << "Division: " << c << std::endl;
    // truncated division is the division of two integers that results in an integer. 
    // The result is the quotient of the division, with any remainder discarded.
    // For example, 7 / 3 = 2, because 3 goes into 7 two times with a remainder of 1. 
     
    //The modulus operator can be used to find the remainder of the division.


    c = a % b;  // Modulus
    std::cout << "Modulus: " << c << std::endl;
    
    int priority = 6 - 5 + 4 * 3 / 2; // Multiplication has higher priority than addition
    std::cout << "Priority: " << priority << std::endl;
    return 0;
}
