#include <iostream>
#include <string>

using namespace std;

int main() {
    int a,b,c,d,e;
    a = 75;     //int
    b = 75u;    //unsigned int
    c = 75l;    //long
    d = 75ul;   //unsigned long
    e = 75lu;   //unsigned long
    
    float f,g;
    f = 3.14159l;   //long double
    g = 6.02e23f;   //float 6.02 x 10^23

    char h; string i;
    h = 'm';        //char require ''
    i = "mandaur";  //strings require ""

/* escape code:
1. \n = newline
2. \t = tab
3. \v = vertical tab
4. \b = backspace
*/

/*
Characters can also be represented in literals using its numerical 
code by writing a backslash character (\) followed by the code 
expressed as an octal (base-8) or hexadecimal (base-16) number.

For an octal value, the backslash is followed directly by the digits; 
while for hexadecimal, an x character is inserted between the 
backslash and the hexadecimal digits themselves 
(for example: \x20 or \x4A).
*/
    string str1,str2;
    str1 = "HelloAditya ShrivastavJi"; 
    str2 = "Hello" "Aditya Shrivastav"   "Ji"; //equivalent to str1
// Note how spaces within the quotes are part of the literal, 
// while those outside them are not.
    string str3, str4;
    str3 = "string expressed in two lines";
    str4 = "string expressed in \
    two lines";                     //equivalent to str3
}
/*
1. int 
    int, unsigned int, long, unsigned long
2. float
    float, long double
*/

/* In all the cases above, the suffix can be specified 
using either upper or lowercase letters. */