#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
        cin >> n; // memanggil variable input n

        if (n <= 20)
        { // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen. \n"; // Menampilkan Pesan jika data lebih 20
        }
    }
    cout << endl; // Membuat jarak per baris program
    cout << "============" << endl; // Mmebuat tampilan susunan data element array 
    cout << "Masukkan Element Array" << endl;
    cout << "============" <<endl;
    

}


