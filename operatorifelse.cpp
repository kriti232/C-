#include <iostream>
using namespace std;
int main() {
    int a = 10;
    int b = 3;
    // Arithmetic operators
    cout << "Addition: " << (a + b) << std::endl;          // 13
    cout << "Subtraction: " << (a - b) << std::endl;       // 7
    cout << "Multiplication: " << (a * b) << std::endl;    // 30
    cout << "Division: " << (a / b) << std::endl;          // 3
    cout << "Modulus: " << (a % b) << std::endl;           // 1
  // binary & unary operators: binary needs two operands, unary needs one operand
    cout << a++ << endl; // unary operator post increment 
    cout << ++a << endl; // unary operator pre increment 
    cout << b-- << endl; // unary operator post decrement
    cout << --b << endl; // unary operator pre decrement
    // assignment operators: used to assign values to variables
    int c = 5;
    c += 2; // c = c + 2
    cout << c << endl; // 7
    c -= 3; // c = c - 3
    cout << c << endl; // 4
    // relational operators
    cout << (a < b) << endl; // false
    cout << (a > b) << endl; // true
    cout << (a <= b) << endl; // false
    // logical operators
    cout << (a && b) << endl; // true
    cout << (a || b) << endl; // true
    cout << (!a) << endl; // false
    /* if else conditional statement
    int age = 30;
    if (age < 18) {
        cout << "Minor" << endl;
    } else {
        cout << "Adult" << endl;
    } */
    int A, B, num;
    cin >> A >> B;
    if (A > B) {
      cout << " a is larger"<< endl;
    } else {
      cout << " b is larger" << endl;
    }
    cin >> num;
    if (num % 2 == 0) {
      cout << "Even" << endl;
    } else {
      cout << "Odd" << endl;
    }
    // else if statement not only check once at a time but multiple if conditions check iterations does not matter above condition true or false but else if only check when above if condition false
    int marks;
    cin >> marks;
    if (marks >= 90) {
      cout << "Grade A" << endl;
    } else if (marks >= 80) {
      cout << "Grade B" << endl;
    } else if (marks >= 70) {
      cout << "Grade C" << endl;
    } else if (marks >= 60) {
      cout << "Grade D" << endl;
    } else {
      cout << "Grade F" << endl;
    }
    // ternary operator: condition ? expression1 : expression2;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << (age >= 18 ? "You are an adult." : "You are a minor.") << endl;
    // Largest 
    int x = 12, y = 14;
    int largest = (x > y) ? x : y;
    cout << "Largest number is: " << largest << endl;
    return 0;
}
