#include <iostream>
#include <vector>
#include <string>
#include <sstream> 
using namespace std;

int findMaximum(const vector<int>& array) {
    int maxVal = array[0];
    for (int i = 1; i < array.size(); ++i) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    return maxVal;
}

int findMinimum(const vector<int>& array) {
    int minVal = array[0];
    for (int i = 1; i < array.size(); ++i) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
    }
    return minVal;
}

double findAverage(const vector<int>& array) {
    double sum = 0;
    for (int i = 0; i < array.size(); ++i) {
        sum += array[i];
    }
    return sum / array.size();
}

int main() {
    vector<int> array;
    string input;

    cout << "Masukkan elemen array (tekan Enter untuk menghentikan):" << endl;
    while (true) {
        getline(cin, input); 
        if (input.empty()) {  
            break;
        }

        stringstream ss(input);
        int value;
        while (ss >> value) {
            array.push_back(value); 
        }
    }

    if (array.empty()) {
        cout << "Array kosong. Tidak ada data untuk diproses.\n";
        return 0;
    }

    int choice;
    do {
        cout << "\nMENU:\n";
        cout << "1. Cari Nilai Maksimum\n";
        cout << "2. Cari Nilai Minimum\n";
        cout << "3. Cari Nilai Rata-rata\n";
        cout << "4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Nilai maksimum: " << findMaximum(array) << endl;
                break;
            case 2:
                cout << "Nilai minimum: " << findMinimum(array) << endl;
                break;
            case 3:
                cout << "Nilai rata-rata: " << findAverage(array) << endl;
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Opsi tidak valid. Silakan coba lagi.\n";
        }
    } while (choice != 4);

    return 0;
}