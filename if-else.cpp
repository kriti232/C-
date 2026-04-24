# include <iostream>
using namespace std;
int main () {
int age, n, marks, i;
 char ch;
 /* cout<< "Enter your age:" << endl;
 cin >> age;
 if (age >= 18) {
    cout << "according to indian law you are eligible to driving lisence and voter card" << endl;
 } else {
    cout << "according to indian law you are not eligible for driving lisence & voter card" << endl;
 }
 cout << "give me number: " << endl;
 cin >> n;
 if (n >= 0) {
    cout << "positive" << endl;
    if (n % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
 } else {
    cout << "negative \n";
 }
 cout << "enter the marks: \n" ;
 cin >> marks ;
 if (marks >= 90) {
    cout << "grade 'A' \n ";
  } else if (marks >= 80 && marks < 90) {
   cout << "grade 'B'\n ";
   } else if (marks >= 70 && marks < 80) {
    cout << "grade 'c' \n";
   } else if (marks >= 60 && marks < 70) {
    cout << "grade 'D' ";
   } else if (marks >= 30 && marks < 50) {
    cout << "below average\n";
   } else {
    cout << "fail" << endl;
 }
 cout << "enter letter: " << endl;
 cin >> ch;
 if (ch >= 'a' && ch <= 'z') {
    cout << "lowercase letter" << endl;
   } else {
    cout << "uppercase latter" << endl;
 } 
  /* LOOPS 
  1. while loop
  2. for loop
  3. do while 
  cout << "enter n:" << " " ;
  cin >> n ;
  i = 1;
  int sum = 0;
  while (i <= n) {
    sum += i;
    i++;
  } 
  cout << sum << endl ;
  // infinite loop stop shortcut ctrl+c or comman+c //
  for (int i=2,n=20; i<=n; i=i+2) {
  cout << i << " ";
  } 
 cout << "enter number (n)" << endl;
 cin >> n ;
  sum = 0;
 for (i=1; i <= n ; i++) {
  sum+=i;
  if (i==40) {
    break;
  }
 }
 cout << sum << endl; */
 // print odd numbers //
 n = 50;
 int  oddSum = 0;
 for (i=1; i <= n; i++) {
   if(i % 2 != 0) {
    oddSum += i;
  }
 }
 cout << "odd sum = " << oddSum << endl;
 int mult = 1;
 for (i=1; i<=10; i++) {
   cout << 2*i << endl;
 }
 int evensum = 0;
 n = 45, i = 1;
 while (i <= n) {
    if (i % 2 == 0) {
     // cout << i << endl; // print no //
     evensum += i;
   } 
   i++; 
 }
 cout << "even no is   " << evensum << endl; 
 // do while //
 n = 100;
 i = 50;
 do {
    if (i % 2 == 0) {
       cout <<"btw 50 to 100 =  " << i << endl;
    }
    i++ ;
 } while (i <= n);
  return 0;

}
