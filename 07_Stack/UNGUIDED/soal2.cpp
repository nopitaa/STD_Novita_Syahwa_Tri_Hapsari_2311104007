#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> charStack;         // Deklarasi stack untuk menyimpan karakter
    string sentence, word;

    cout << "Masukkan kalimat dengan minimal 3 kata: ";
    getline(cin, sentence); // digunakan untuk membaca seluruh kalimat dari pengguna

    cout << "Hasil: ";
    // melakukan loop untuk memproses setiap karakter dalam kalimat
    for (char x : sentence) {
        if (x != ' ') {            
            charStack.push(x);     
        } else {                  
            // Keluarkan semua karakter dalam stack (membalikkan kata) dan cetak
            while (!charStack.empty()) {
                cout << charStack.top(); // mencetak karakter teratas stack
                charStack.pop();         // menghapus karakter teratas dari stack
            }
            cout << " ";           // digunakan untuk memisahkan kata
        }
    }
    
    // Cetak sisa karakter dalam stack untuk kata terakhir (karena tidak diikuti spasi)
    while (!charStack.empty()) {
        cout << charStack.top();    // Cetak karakter teratas stack
        charStack.pop();            // Hapus karakter teratas dari stack
    }
    cout << endl;                 
    return 0;
}
