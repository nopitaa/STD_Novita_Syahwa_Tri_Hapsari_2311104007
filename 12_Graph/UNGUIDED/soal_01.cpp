#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int jumlahSimpul;
    cout << "Silakan masukkan jumlah simpul: ";
    cin >> jumlahSimpul;

    vector<string> namaSimpul(jumlahSimpul);
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << "Silakan masukkan nama simpul " << i + 1 << ": ";
        cin >> namaSimpul[i];
    }

    vector<vector<int>> bobot(jumlahSimpul, vector<int>(jumlahSimpul, 0));
    for (int i = 0; i < jumlahSimpul; ++i) {
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << "Jarak dari " << namaSimpul[i] << " ke " << namaSimpul[j] << ": ";
            cin >> bobot[i][j];
        }
    }

    cout << "\nMatriks Adjacency:\n\t";
    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << namaSimpul[i] << "\t";
    }
    cout << endl;

    for (int i = 0; i < jumlahSimpul; ++i) {
        cout << namaSimpul[i] << "\t";
        for (int j = 0; j < jumlahSimpul; ++j) {
            cout << bobot[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
