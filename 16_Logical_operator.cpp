#include<iostream>
int main()
{
    //Logical Operators : 
    //Type :
    //   &&{AND} : This Operator check wheather Both condition are true 
    
    //   ||{OR}  : This Operator check at least one condition is true

    //   !{NOT} : This Operator convert's True in False and False in True.Basically reverse the logic
    
    double temp;
    std::cout<<"Enter Temperature : ";

    std::cin>>temp;

    if(temp > 0 && temp < 30 ){
        std::cout<<"The temperature is Normal";
    }
    else if (temp < 30 || temp < 100){
        std::cout<<"The temperature is really Hot";
    }
    else {
        std::cout<<"The temperature is Cold";
    }

    
    return 0;
}