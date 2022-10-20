// To be able to handle strings we have to use <strings> library
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "My name is Aditya Shrivastav";
    cout << name;
    return 0;
}
/*
three ways :- 
string mystring = "This is a string";
string mystring ("This is a string");
string mystring {"This is a string"};

Note: inserting the endl manipulator ends the line 
    (printing a newline character and flushing the stream).
*/