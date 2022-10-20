#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string name;
    cout << "What's your name? ";
    getline (cin, name);
    cout << "Hello " << name << ".\n";
    
    cout << "What is your favorite team? ";
    getline (cin, name);
    cout << "I like " << name << " too!\n";

    return 0;
/*
cin terminates when we try to insert spaces in our sentence.

To add spaces there exists a function called getline(), that takes cin as first argument and
the string varible as second.
*/