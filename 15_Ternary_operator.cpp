#include<iostream>
int main(){
     //ternary operator "?" : Replacement of if/else statement
     //ternary operator 
     //condition ? expression1 :expression2; 
     int marks = 69 ;
     if(marks>=65){
        std::cout<<"You Pass!"<<'\n';
     }
    else{
        std::cout<<"You Fail"<<'\n';
    }


    // Other Way of Writing this 

    marks>=65 ? std::cout<<"You Pass"<<'\n' : std::cout<<"You fail"<<'\n' ;


    //Both do the same work  

    return 0;
}