#include <iostream>

using namespace std;

int isHasil(int nilai){
    if (nilai % 2 ==0){
        cout << "Nilai " <<nilai<< " adalah genap" <<endl;
    } else {
        cout << "Nilai " <<nilai<< " adalah ganjil" <<endl;
    }

    if (nilai % 3 ==0){
        cout << "Nilai " <<nilai<< " kelipatan 3" <<endl;
    } else {
        cout << "Nilai " <<nilai<< " bukan kelipatan 3" <<endl;
    }

}
int main()
{
    int nilai;

    cout << "Masukkan nilai :";
    cin >> nilai;

    isHasil(nilai);

    return 0;
}
