#include<iostream>
int main(){
    // cout --> stands for "character output" and is used to print data to the console.
    //  its an insertion operator. It is used to insert data into the output stream.
    // cin --> stands for "character input" and is used to read data from the console 
    //  its an extraction operator. It is used to extract data from the input stream.
   std::string name;
   int age;

   std::cout<<"Enter your name your Full name : ";

   std::getline(std::cin >> std::ws, name);
   // std::getline() is used to read a line of text from the input stream. 
   // It is used to read a string with spaces.
   // std::ws is used to ignore any leading whitespace characters in the input stream.
   std::cout<<"Enter your age : ";

   std::cin>>age;
   // >> is the extraction operator. It is used to extract data from the input stream.
   std::string Mobile_num ;
   std::cout<<"Enter your Mobile Number: ";
   std::getline(std::cin >> std::ws, Mobile_num);
   std::cout<<"Hello " <<name<<'\n';
   std::cout<<"You are " <<age<< "years old."<<'\n';
   std::cout<<"Your Mobile number is: "<<Mobile_num<<'\n';
   return 0;
}