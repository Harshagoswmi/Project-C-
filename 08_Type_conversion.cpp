#include<iostream>
int main(){
    //type conversion is the process of converting a variable from one data type to another data type.
    //There are two types of type conversion in C++:
    //1. Implicit type conversion (type casting)
    //2. Explicit type conversion (type casting)
    //Implicit type conversion is done by the compiler automatically when a variable of one data type is assigned to a variable of another data type.
    
    int a = 5.98; // Implicit type conversion from double to int
    std::cout<<a<<'\n';
    //Explicit type conversion is done by the programmer using type casting operators.
    
    double b = (int)6.67; // Explicit type conversion from double to int
    std::cout<<b<<'\n';
    //Type casting operators are used to convert a variable from one data type to another data type.
    
    //There are two types of type casting operators in C++:
    //1. C-style type casting operator
    //2. C++ style type casting operator
    
    int score = 8;
    int question = 10;
    double percentage = score / (double)question * 100; // C-style type casting operator    
    std::cout<<percentage<<'\n';
    return 0;
}