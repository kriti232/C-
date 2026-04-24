#include <iostream>
#include <typeinfo>  // Needed for typeid
using namespace std;
int main () {
//     cout<<"kritika \n"<< "kushwaha \n";
//     // check if a number is prime or not //
//      int x = 2;
//     double y = 3.5;
//     char z = 'g';
// // store the size of the variables into a, b, c variables;
//     int a = sizeof(x);
//     int b = sizeof(y);
//     int c = sizeof(z);
//     // printing the size of the variable x.
//     cout << a << " " << b << " " << c << endl;
    
    auto a = 5;      // int
    auto b = 's';    // char

    const char* id1 = typeid(a).name();
    const char* id2 = typeid(b).name();

    cout << id1 << " " << id2 << endl;

    int leap_year;
    cout << "Enter a year: ";
    cin >> leap_year;
    if ((leap_year % 4 == 0 && leap_year % 100 != 0) || (leap_year % 400 == 0)) {
        cout << leap_year << " is a leap year." << endl;
    } else {
        cout << leap_year << " is not a leap year." << endl;
    }

    int num;
    cout<<"enter a number: ";
    cin>>num;
    int sum;
    while(num != 0) {
        int a = num%10;
        sum += (a*a*a);
        num/=10;
    }
      cout << "The sum of cubes of the digits is: " << sum << endl;

    return 0;
}



