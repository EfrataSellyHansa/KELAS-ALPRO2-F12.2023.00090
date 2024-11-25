#include <iostream>
using namespace std;

/*int recAdd(int a, int b){
    if(b == 0) {
        return a;
    }else{
    return recAdd(a + 1, b - 1);
    }
}*/

    int recPowerOfTwo(int n, int e) {
        if (e == 0) {
            return 1;
        }else{
            return n * recPowerOfTwo(n, e - 1);
        }
    }


int main() {
/*    int a, b;
    cout << "Masukkan nilai awal:";
    cin >> a;
    cout << "Masukkan nilai kedua:";
    cin >> b;

    cout << "Hasil Penjumlahan :" <<recAdd(a,b) <<endl;
*/

    int n, e;
    cout << "Masukkan bilangan: ";
    cin >> n;
    cout << "Masukkan pangkat: ";
    cin >> e;

    cout << "Hasil pangkat adalah: " << recPowerOfTwo(n, e) << endl;

    return 0;
}
