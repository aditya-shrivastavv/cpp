#include <iostream> //preprocessor directive

int main() {
    std::cout << "Hello World";
    return 0;
}
/*
1. Lines beginning with a hash sign (#) are directives read and
    interpreted by what is known as the preprocessor.They are special 
    lines interpreted before the compilation of the program itself begins.
2. The execution of all C++ programs begins with the main function, 
    regardless of where the function is actually located within the code.
3. std::cout << "Hello World";
    It is a statement in C++.
    Statements are executed in the same order that they appear
    within a function's body.
    
    (a)This statement has three parts: First, std::cout, which identifies the
        standard character output device (usually, this is the computer screen). 
    (b)Second, the insertion operator (<<), which indicates that what follows is
        inserted into std::cout. 
    (c)Finally, a sentence within quotes ("Hello world!"), is the content
        inserted into the standard output.
*/