#include <iostream>
int main(){
    const  double PI = 3.14159;
    // double PI = 56.98; PI can't be change as we have use const keyword 
    // which is to fix value of any variable
    const int LIGHT_SPEED = 299792458;
    double radius = 10;
    double circumference = 2*radius*PI;

    std::cout<<circumference<< " CM" <<'\n';
    return 0;
}