#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; i++){ // kurang ditambahin kurung kurawal "{" buka saja
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    return 0;
}