#include<iostream>
using namespace std;
int main() {
    int n, j;
    cout << "enter number: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i*3 << endl;
    }
    cout << "enter j: ";
    cin >> j;
    for (int i = 1; i <= 10; i++) {
        cout << j*i << endl;
    }
    cout << "last value of i is: " << i << endl;
    return 0;
}


