#include<iostream>
using namespace std;
int main() {
    int time, hour, minutes;
    cout << "give me time value in minutes:-  ";
    cin >> time ;
    hour = time/60;
    minutes = time % 60;
    cout<<"your time is:- " << hour <<" hour " << minutes << " minutes\n" ;
  
    // result values 
    int science, english, math, total;
    cout << "Enter marks obtained in Science: ";
    cin >> science;
    cout << "Enter marks obtained in English: ";
    cin >> english;
    cout << "Enter marks obtained in Math: ";
    cin >> math;
    total = (science + english + math) / 3.0;
    cout << "average marks obtained: " << total << endl;
    if (total > 30) {
        cout << "You passed with distinction." << endl;
    } else {
        cout << "You failed." << endl;
    }
    // income tax calculation
    double income, tax;
    cout << "Enter your annual income (in lakhs): ";
    cin >> income;
    if (income > 7.5) {
        tax = 0.3 * income;
        cout << "You need to pay tax: " << tax << " lakhs." << endl;
    } else if (income > 5.0) {
        tax = 0.2 * income;
        cout << "You need to pay tax: " << tax << " lakhs." << endl;
    } else {
        cout << "You are exempted from tax." << endl;
    }
    // Largest of 3 numbers 
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    if (x > y && x > z) {
        cout << "Largest number is: " << x << endl;
    } else if (y > z) {
        cout << "Largest number is: " << y << endl;
    } else {
        cout << "Largest number is: " << z << endl;
    }
    // build calculater
    int a, b;
    char op;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b; 
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
  /*  if (op == '+') {
        cout << "Result: " << a + b << endl;
    } else if (op == '-') {
        cout << "Result: " << a - b << endl;
    } else if (op == '*') {
        cout << "Result: " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Invalid operator!" << endl;
    } */
   // using switch case
    switch (op) {
         case '+':
              cout << "Result: " << a + b << endl;
              break;
         case '-':
              cout << "Result: " << a - b << endl;
              break;
         case '*':
              cout << "Result: " << a * b << endl;
              break;
         case '/':
              if (b != 0) {
                cout << "Result: " << a / b << endl;
              } else {
                cout << "Error: Division by zero!" << endl;
              }
              break;
         default:
              cout << "Invalid operator!" << endl;
    }
    return 0;
}