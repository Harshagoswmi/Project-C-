#include<iostream>
#include<vector>

//typedef std::vector<std::pair<std::string ,int >> pairlsit_t;
//typedef std::string str_t;
//typedef int num_t;

using str_t = std::string;
using num_t = int;



int main(){
    // typedef is a keyword in C++ that is used to create an alias{additional name } for another data type. 
    // It allows you to give a new name to an existing data type,
    //  making the code more readable and easier to understand.
    //  Use when there is a clear benefit.
    // Repalce with 'using' is a good idea.[work btter with templates]

    str_t name ="Harsha Goswami";
    num_t age = 21;
    std::cout<<name << '\n';
    std::cout<<age<<'\n';

    return 0;
}
