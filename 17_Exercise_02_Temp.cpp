#include<iostream>
int main()
{
std::cout<<"***************** Temperature Conversion *****************"<<'\n';
    double temp;
    char unit;
    double CtoF;
    double FtoC;


    std::cout<<"Celsius--->'C' Or Fahrenheit---->'F'"<<'\n'
             <<"Enter the temperature you like to convert with unit: ";
    
    std::cin>>temp>>unit; 


    if(unit=='C' || unit=='c')
    {
        CtoF = ((9.0/5.0) * (temp) )+ 32.0;
        std::cout<<"Celsius to Fahrenheit is : "<< CtoF <<" °F";
    }

    else if(unit == 'F'||unit == 'f') 
    {
        FtoC = (5.0/9.0) * temp - 32.0;
        std::cout<<"Fahrenheit to Celsius is : "<< FtoC <<" °C"<<'\n'<<'\n';
    }
    else 
    {
        std::cout<<"Invalid unit";
    }
std::cout<<"***************************************************";
    
    return 0;
}