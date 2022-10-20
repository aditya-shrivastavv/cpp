/*
The standard header <sstream> defines a type called stringstream that allows a string to be 
treated as a stream, and thus allowing extraction or insertion operations from/to strings in 
the same way as they are performed on cin and cout. This feature is most useful to convert 
strings to numerical values and vice versa. For example, in order to extract an integer from 
a string we can write:
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sen ("786");
    int str2int;
    stringstream(sen) >> str2int;
    cout << str2int;
/*
This declares a string with initialized to a value of "1204", and a variable of type int. 
Then, the third line uses this variable to extract from a stringstream constructed from the string. 
This piece of code stores the numerical value 1204 in the variable called myint.
*/

/*
In this example, we acquire numeric values from the standard input indirectly: Instead of 
extracting numeric values directly from cin, we get lines from it into a string object (mystr), 
and then we extract the values from this string into the variables price and quantity. 
Once these are numerical values, arithmetic operations can be performed on them, such as 
multiplying them to obtain a total price.

With this approach of getting entire lines and extracting their contents, we separate the 
process of getting user input from its interpretation as data, allowing the input process to 
be what the user expects, and at the same time gaining more control over the transformation of 
its content into useful data by the program.
*/
}