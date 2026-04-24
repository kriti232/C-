#include <iostream>
using namespace std;
int main() {
    // variables & data types or cout is used print output
    int age = 25; // called variable name is identifier //
    float PI = 3.14f; // always write the end if gloat values 'f' ;
    cout<< PI << endl;
    bool istrue = true;
    // true prints 1 and false prints 0
    cout << istrue << endl;
    char grade = 'a';
    int value = grade;
    cout << value << endl;
    double price = 100.99;
    int newprice = (int)price;
    cout << newprice << endl;
    // input //
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age << endl;
    // operators 
    // arithmetic operators
    int a = 20 , b = 10;
    cout << "addition =" << a+b << endl;
    cout << "subtraction =" << a-b << endl;
    cout << "multiplication =" << a*b << endl;
    cout << "division =" << a/b << endl;
    cout << "modulous =" << a%b << endl;
    int c = 5; double d = 2;
    cout << "c/d = " << c/d << endl; // division with double
    // relational operators
    cout << (3>5) << endl;
    cout << (3<5) << endl;
    cout << (5>=5) << endl;
    // logical operators
    cout << (3>5 || 3<5) << endl;
    cout << (3>5 && 3<5) << endl;
    cout << !(3>5) << endl;
   // unary operators
   int x = 10;
   int y = x++;
   cout << "x = " << x << endl; // x is incremented after assignment
   cout << "y = " << y << endl; // y is assigned the value of x before increment
   int z;
   cout << z << endl;


    return 0;
}