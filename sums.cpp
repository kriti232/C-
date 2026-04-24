#include <iostream>
using namespace std;
# define x 67; // macro definition
int main() {
    // sum of two numbers
    int a , b;
    cout << "enter the two numbers:" << endl;
    cin >> a >> b;
    cout << "sum of two numbers is: " << a+b << endl;
    // contant in cpp means it is never changed whole program
    const double pi = 3.14;
    double pi2 = 3.14;
    // pi = 3.13; // this will give error
    pi2 = 22/7; // this is valid
    x; // macro usage
    cout << (10 / 3.0) << endl; // implicit type conversion
    cout << (10 / 3) << endl;   // integer division
    cout << ('A' + 1) << endl;

    return 0;
}