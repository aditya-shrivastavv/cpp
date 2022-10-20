/*
C++ uses a convenient abstraction called streams to perform input and output operations in 
sequential media such as the screen, the keyboard or a file.

cin 	- standard input stream
cout	- standard output stream
cerr	- standard error (output) stream
clog	- standard logging (output) stream
*/
#include <iostream>
using namespace std;

int main() {
    float pi = 3.1459;
    cout << "Lenovo makes good Laptops !" <<endl;   //string
    cout << 6260391872 <<endl;                      //number
    cout << pi <<endl;                              //varible
//The << operator inserts the data that follows it into the stream that precedes it. 
    cout << "This " << "is a " << "single C++ statement.\n";
//endl and \n does the same work i.e. break the line.
/*
endl also has an additional behavior: the stream's buffer (if any) is flushed, which means 
that the output is requested to be physically written to the device, if it wasn't already.

Still, it is generally a good idea to use endl only when flushing the stream would be a 
feature and '\n' when it would not. Bear in mind that a flushing operation incurs a certain 
overhead, and on some devices it may produce a delay.
*/

}