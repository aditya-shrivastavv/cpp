/*
x << => insertion operator
x >> => extraction operator
*/
#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Enter a Integer : ";
    cin >> i;
    cout << "You've Entered " << i <<endl;
    cout << "and it's double is " << i * 2 <<endl;

    int a,b;
    cout << "Enter a and b";
    cin >> a >> b;
    // equivalent to
    // cin >> a;
    // cin >> b;

}
/*
But this method also has a big drawback. What happens in the example above if the user enters 
something else that cannot be interpreted as an integer? Well, in this case, the extraction 
operation fails. And this, by default, lets the program continue without setting a value for 
variable i, producing undetermined results if the value of i is used later.
This is very poor program behavior.
*/