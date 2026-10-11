#include<iostream>
#include<cmath>
int main(){

    double base ;
    std::cout<<"Enter the Base of the Triangle: ";
    std::cin>>base;
    double height;
    std::cout<<"Enter the Height of the Triangle: ";
    std::cin>>height;
    double hypotenuse;
    hypotenuse = sqrt(pow(base, 2)+pow(height,2));
    std::cout<<"The Hypotenuse of the Triangle is : " <<hypotenuse<<" Unit"<<'\n';
    return 0;

}