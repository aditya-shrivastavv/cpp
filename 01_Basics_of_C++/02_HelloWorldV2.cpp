#include <iostream> 
using namespace std;
// using std everywhere we can use this line and then never worry about that.

int main() {
    cout << "Hello World";
    return 0;
}
/*
1. If you have seen C++ code before, you may have seen cout being used instead of std::cout. 
    Both name the same object: the first one uses its unqualified name (cout), while the 
    second qualifies it directly within the namespace std (as std::cout).
2. cout is part of the standard library, and all the elements in the standard C++ library 
    are declared within what is called a namespace: the namespace std.
3. In order to refer to the elements in the std namespace a program shall either qualify 
    each and every use of elements of the library (as we have done by prefixing cout with std::),
    or introduce visibility of its components. The most typical way to introduce visibility of 
    these components is by means of using declarations.
4. The above declaration allows all elements in the std namespace to be accessed in an 
    unqualified manner (without the std:: prefix).
5. Both ways of accessing the elements of the std namespace (explicit qualification and 
    using declarations) are valid in C++ and produce the exact same behavior. 
    For simplicity, and to improve readability, the examples in these tutorials will more 
    often use this latter approach with using declarations, although note that explicit 
    qualification is the only way to guarantee that name collisions never happen.
*/
