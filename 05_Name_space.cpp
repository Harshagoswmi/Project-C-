#include <iostream>
namespace first{
    int x = 1;
}
namespace second{
    int x = 9;
}
int main(){
    // Name space = Provides a solution for preventing name conflict 
    // large projects. Each Entity Needs A Unique Name.
    // A "namespace" allows for identically name entities
    // as long as namespace are diffrent.
    """
    using namespace std;
      This is not a good practice to use this in large projects.
    """
    using namespace first;
    // We can prefix the variable with the namespace name to access it.
    // We can also use the "using" keyword to avoid prefixing the variable with the namespace name.
    // However, if we use the "using" keyword, we can only access the variable from that namespace.
    // If we want to access the variable from another namespace, we need to prefix it with the namespace name.
    int x = 0;
    std :: cout << "Original value of x is : "<< x<<'\n';
    std :: cout << "The first value of x is : "<< first::x<< '\n';
    // Here :: is called scope resolution operator. 
    // It is used to access the global variable x 
    // and the variable x in the first namespace.
    std :: cout << "The second value of x is : "<< second::x<<'\n';
    return 0;
}