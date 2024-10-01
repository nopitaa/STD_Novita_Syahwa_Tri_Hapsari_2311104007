#include <iostream>
using namespace std;

int main() {
    int panjang, lebar, tinggi;
    
    // Input ukuran array
    cout << "Masukkan ukuran array 3 dimensi:" << endl;
    cout << "Panjang: ";
    cin >> panjang;
    cout << "Lebar: ";
    cin >> lebar;
    cout << "Tinggi: ";
    cin >> tinggi;
    
    // array 3 dimensi
    int arr[panjang][lebar][tinggi];
    for(int i = 0; i < panjang; i++) {
        for(int j = 0; j < lebar; j++) {
            for(int k = 0; k < tinggi; k++) {
                arr[i][j][k] = i + j + k; 
            }
        }
    }
    
    // Menampilkan isi array
    cout << "\nIsi array 3 dimensi:" << endl;
    for(int i = 0; i < panjang; i++) {
        for(int j = 0; j < lebar; j++) {
            for(int k = 0; k < tinggi; k++) {
                cout << "arr[" << i << "][" << j << "][" << k << "] = " 
                    << arr[i][j][k] << endl;
            }
        }
    }
    
    return 0;
}