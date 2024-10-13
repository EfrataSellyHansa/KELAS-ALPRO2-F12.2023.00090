#include <iostream>

using namespace std;

    string nama;
    string nim;
    int usia;

int main()
{
    cout << "Masukkan Nama : ";
    cin >> nama;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan Usia : ";
    cin >> usia;

    cout << "Nama : " << nama <<endl;
    cout << "NIM : " << nim <<endl;
    cout << "Usia : " << usia <<endl;

    //for(int i = 0; i <usia; i++){
        //cout << nama << endl;

    int i = 0;
    do {
        cout << nama << endl;
        i++;
    }
    while ( i < 20);

    return 0;
}
