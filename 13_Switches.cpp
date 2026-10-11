#include<iostream>
int main(){
    // Switches : Alternative to using "else if" statements
    //           compare one value against matching cases


    int month;
    std::cout<<"Enter the month number{i.e B/w 1 to 12} : ";
    std::cin>>month;
     
    switch(month){
        case 1:
            std::cout<<"It's January"<<'\n';
            break;
        case 2:
            std::cout<<"It's February"<<'\n';
            break;
        case 3:
            std::cout<<"It's March"<<'\n';
            break;
        case 4:
            std::cout<<"It's April"<<'\n';
            break;
        case 5:
            std::cout<<"It's May"<<'\n';
            break;
        case 6:
            std::cout<<"It's June"<<'\n';
            break;
        case 7:
            std::cout<<"It's July"<<'\n';
            break;
        case 8:
            std::cout<<"It's August"<<'\n';
            break;
        case 9:
            std::cout<<"It's Septmber"<<'\n';
            break;
        case 10:
            std::cout<<"It's Octuber"<<'\n';
            break;
        case 11:
            std::cout<<"It's Novamber"<<'\n';
            break;
        case 12:
            std::cout<<"It's December"<<'\n';
            break;
        default:
            std::cout<<"Wrong entry choose between 1 to 12"<<'\n';
        
    }
char grade;
std::cout<<"Enter your Grade in alphabetical letter: ";
std::cin>>grade;

switch(grade){
    case 'A':
        std::cout<<"You did Great! You got an A ";
        break;
    case 'B':
        std::cout<<"You did good! You got an B  ";
        break;
    case 'C':
        std::cout<<" You did Okay! You got an C ";
        break;
    case 'D':
        std::cout<<"You need to do better! You got an D";
        break;
    case 'F':
        std::cout<<"You really need to focus on study! You are Fail ";
        break;
    
        
}


    return 0;
}