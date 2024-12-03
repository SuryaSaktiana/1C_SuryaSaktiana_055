#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int angka;

    cout << "masukkan nilai a: ";
    cin >> a;
    cout << "masukkan nilai b: ";
    cin >> b;



    cout << "sebelum pertukaran:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    if(a < b){
            c = a;
            a = b;
            b = c;
}
    cout << "setelah pertukaran: " << endl;
    cout << "a = " << a ;
    cout << "b = " << b ;

    }

