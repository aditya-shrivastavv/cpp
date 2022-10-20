#include <iostream>
using namespace std;

int main() {

    int digit = 5;
    auto number = digit; // the same as: int number = digit;
    cout << number; //5

    int adi = 0;
    decltype(adi) boss; // the same as: int boss; 

    return 0;
}
/* 
1. auto
    When a new variable is initialized, the compiler can figure out what the type of the 
    variable is automatically by the initializer. For this, it suffices to use "auto" as the 
    type specifier for the variable.

2. decltype
    Variables that are not initialized can also make use of type deduction with the decltype 
    specifier.
    auto and decltype are powerful features recently added to the language. But the type 
    deduction features they introduce are meant to be used either when the type cannot be 
    obtained by other means or when using it improves code readability. The two examples 
    above were likely neither of these use cases. In fact they probably decreased readability, 
    since, when reading the code, one has to search for the type of foo to actually know the 
    type of bar.
*/