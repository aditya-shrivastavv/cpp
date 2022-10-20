#include <iostream>
using namespace std;

int main() {
    int x = 6;
    cout << "Enter any Integer : ";
    cin >> x;

    if (x < 0)
        cout << x << " is negative.\n";
    else if (x > 0)
        cout << x << " is positive.\n";
    else   
        cout << "You entered Zero.\n";
    return 0;
}