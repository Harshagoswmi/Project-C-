#include<iostream>
int main(){
    std::cout<<"********************** Basic Calculator **********************"<<'\n';
    std::cout<<"Enter '+' for Addition "<<'\n'<<"Enter '-' for Subtraction "<<'\n'<<"Enter '*' for Multiplication "<<'\n'<<"Enter '/' for Division "<<'\n'<<"Enter you choose :";
    
    char operater;
    std::cin>>operater;
    
    
    double num1;
    std::cout<<"Enter a number : ";
    std::cin>>num1;

    double num2;
    std::cout<<"Enter another number : ";
    std::cin>>num2;
    
    
    
    
    switch(operater){
        case '+':
                std::cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<(num1+num2);
                break;
        
        case '-':
                std::cout<<"The subtract of "<<num1<<" with "<<num2<<" is "<<(num1-num2);
                break;
        
        case '*':
                std::cout<<"The multiply of "<<num1<<" with "<<num2<<" is "<<(num1*num2);
                break;
        case '/':
                std::cout<<"The sum of "<<num1<<" and "<<num2<<" is "<<(num1/num2);
                break;
        default:
               std::cout<<"Enter a valid character from the given optains";
    }
    std::cout<<'\n'<<"**************************************************************";

    return 0;

}