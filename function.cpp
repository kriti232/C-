#include <iostream>
using namespace std;
void sayHello () {
    cout << "Hello Functions!" << endl;
}
void assistant () {
    sayHello ();
    cout << "work done" << endl;
}
int main () {
    assistant ();
    return 0;
}