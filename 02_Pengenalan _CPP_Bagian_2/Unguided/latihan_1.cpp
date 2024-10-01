#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    vector<int> dataArray;
    vector<int> evenNumbers;
    vector<int> oddNumbers;
    string inputLine;
    int number;

    // Meminta user untuk memasukkan data
    cout << "Masukkan angka: ";
    getline(cin, inputLine);

    // Menggunakan stringstream untuk memisahkan input berdasarkan spasi
    stringstream ss(inputLine);
    while (ss >> number) {
        dataArray.push_back(number);

        // Memeriksa apakah angka genap atau ganjil
        if (number % 2 == 0) {
            evenNumbers.push_back(number);
        } else {
            oddNumbers.push_back(number);
        }
    }

    // Menampilkan hasil
    cout << "Data Array  : ";
    for (int i = 0; i < dataArray.size(); ++i) {
        cout << dataArray[i] << " ";
    }
    cout << endl;

    cout << "Nomor Genap : ";
    for (int i = 0; i < evenNumbers.size(); ++i) {
        cout << evenNumbers[i];
        if (i != evenNumbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << "," << endl;

    cout << "Nomor Ganjil: ";
    for (int i = 0; i < oddNumbers.size(); ++i) {
        cout << oddNumbers[i];
        if (i != oddNumbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << "," << endl;

    return 0;
}
