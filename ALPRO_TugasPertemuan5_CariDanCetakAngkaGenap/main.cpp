#include <iostream>

using namespace std;

void isGenap(int arr[], int size, int x) {

    bool isFound = false;

    for (int i = 0; i < size; i++) {
        if (x == arr[i] && x % 2 == 0) {
            cout << x << " ditemukan " << endl;
            isFound = true;
            break;
        }
    }

    if (!isFound) {
        cout << x << " tidak ditemukan " << endl;
    }
}



int main()
{
    int arr[] = {2, 2, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int x;
    cout << "Masukkan nilai x: ";
    cin >> x;

    isGenap(arr, size, x);


    return 0;
}
