#include <iostream>
using namespace std;

struct SearchResult_2311104007 {
    int* address;
    int position;
    bool found;
};

SearchResult_2311104007 searchElement_2311104007(int L[], int size, int target) {
    SearchResult_2311104007 result;
    result.found = false;
    int* current = &L[0];
    int position = 1;
    
    while (position <= size) {
        if (*current == target) {
            result.address = current;
            result.position = position;
            result.found = true;
            return result;
        }
        if (position < size) {
            current = &L[position];
        }
        position++;
    }
    
    return result;
}
void inputData_2311104007(int arr[], int size) {
    cout << "Masukkan " << size << " angka integer:\n";
    for (int i = 0; i < size; i++) {
        while (true) {
            cout << "Angka ke-" << (i + 1) << ": ";
            if (cin >> arr[i]) {
                break;
            } else {
                cout << "Mohon masukkan angka integer yang valid!\n";
                cin.clear();
                cin.ignore(10000, '\n');
            }
        }
    }
}
int inputSearchValue_2311104007() {
    int searchValue;
    while (true) {
        cout << "\nMasukkan nilai yang ingin dicari: ";
        if (cin >> searchValue) {
            return searchValue;
        } else {
            cout << "Mohon masukkan angka integer yang valid!\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
}
void displayResult_2311104007(SearchResult_2311104007 result, int searchValue) {
    if (result.found) {
        cout << "\nNilai " << searchValue << " ditemukan:" << endl;
        cout << "Alamat: " << result.address << endl;
        cout << "Posisi: urutan ke-" << result.position << endl;
    } else {
        cout << "\nNilai " << searchValue << " tidak ditemukan dalam array!" << endl;
    }
}
int main() {
    const int SIZE = 6;
    int numbers[SIZE];
    inputData_2311104007(numbers, SIZE);
        int searchValue = inputSearchValue_2311104007();
    
    SearchResult_2311104007 result = searchElement_2311104007(numbers, SIZE, searchValue);
        displayResult_2311104007(result, searchValue);
    return 0;
}