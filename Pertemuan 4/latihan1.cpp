#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    if (a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "b is greater than a" << endl; // kurang ditambahin titik koma ";"

    return 0;
}