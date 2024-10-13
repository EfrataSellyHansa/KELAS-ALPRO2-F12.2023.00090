#include <iostream>

using namespace std;

// tipe data fungsi, nama fungsi (parameters)
int min(int a, int b){
    if (a < b) {
        cout << a << endl;
        return a;
    } else {
        cout << b << endl;
        return b;
    }
}
int main()
{
    //Menggunakan Perulangan
//    int x = 5;
//    int y = 20;

//    for (int i = 0; i < 10; i++){
//        x++;
//        y++;
//        min (x,y);
//   }

    //Memasukkan nilai x dan y terlebih dahulu
    int x,y;

    cout << "Masukkan nilai x :";
    cin >> x;

    cout << "Masukkan nilai y :";
    cin >> y;

    int nilai_terkecil = min(x, y);
    cout << "nilai terkecil dari kedua bilangan diatas adalah : " << nilai_terkecil << endl;

    return 0;
}
