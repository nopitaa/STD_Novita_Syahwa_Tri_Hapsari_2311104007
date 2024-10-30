#include <iostream>
#include <stack>       // Library untuk menggunakan struktur data stack
#include <cctype>      // Library untuk fungsi karakter seperti isalnum() dan tolower()
#include <string>      // Library untuk tipe data string

//Disini adalah fungsi untuk memeriksa apakah kalimat adalah palindrom
bool isPalindrome(const std::string& sentence) {
    std::stack<char> charStack;      // Stack untuk menyimpan karakter yang di filter
    std::string filteredSentence;    // String untuk menyimpan kalimat setelah difilter

    // Melakukan loop untuk memproses setiap karakter dalam kalimat
    for (char ch : sentence) {
        if (std::isalnum(ch)) {        // Memeriksa apakah karakter adalah huruf atau angka
            char lowerChar = std::tolower(ch);  // Mengonversi karakter menjadi huruf kecil
            filteredSentence += lowerChar;      // Menambahkan karakter ke filteredSentence
            charStack.push(lowerChar);          // Memasukkan karakter ke dalam stack
        }
    }

    // Loop untuk membandingkan karakter di filteredSentence dengan stack
    for (char ch : filteredSentence) {
        if (ch != charStack.top()) { // Memeriksa apakah karakter di filteredSentence
            return false; // Jika ada yang tidak sama berati bukan palindrom
        }
        charStack.pop();// untuk menghapus karakter dari stack setelah pengecekan
    }

    return true; //Jika semua karakter sesuai maka kalimat adalah palindrom
}

int main() {
    std::string input;
    std::cout << "Masukkan kalimat: ";
    std::getline(std::cin, input);  // Membaca seluruh baris input 

    // Memeriksa apakah input tersebut adalah palindrom dan menampilkan hasilnya
    if (isPalindrome(input)) {
        std::cout << "Kalimat tersebut adalah : palindrom." << std::endl;
    } else {
        std::cout << "Kalimat tersebut bukan palindrom." << std::endl;
    }
    return 0;
}
