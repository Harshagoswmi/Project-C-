#include <iostream>
int main(){
    // Integer{Whole Number} data type 
    int age = 20;
    int year = 2026;
    int day = 7; 
    //int runs = 57.9; // if i put a decimal number in int datatype it will just return the dight before decimal


    //double(numbers containing deecimal's) data type 
    double price = 10.99 ;
    double temperature = 108.5;

    // char (Single character) Datatype
    char grade = 'A';
    char initial = 'H';

    // boolean (true and false)
    bool student = true;
    bool power = false;

    // string(objects thats represent a sequence of text)
    // we can include numbers in strings but they are treated diffrently
    std:: string name = "Harsha Goswami";
    std:: string food = "Pizza";

    
    std:: cout<<"Hello! "<<name<<'\n';
    std:: cout << "You are "<< age <<" Year's old!"<<'\n';
    return 0;
    
}