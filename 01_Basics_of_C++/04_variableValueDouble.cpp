#include <iostream>
using namespace std;

int main() {
// varible declaration/initialization
    int a = 9, b = 16;

//process
    a = a*2;
    b = b*2;
    
//output
    cout << "doubled a = " << a << "\n";    
    cout << "doubled b = " << b << "\n";    

    return 0;
}
/*
In C++, there are three ways to initialize variables.
1. c-like initialization
    int x = 0;
2. constructor initialization
    int x (0);
3. uniform initialization
    int x {0};

  int a=5;               // initial value: 5
  int b(3);              // initial value: 3
  int c{2};              // initial value: 2
  int result;            // initial value undetermined
*/