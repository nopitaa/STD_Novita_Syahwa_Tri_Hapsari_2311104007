/*#include <iostream>

using namespace std;

int main (){
    string nama, nim;
    cout << "Siapa nama anda?  ";
    cin >> nama;
    cout << "Berapa nim anda?  ";
    cin >> nim;
    cout << "Nama saya: " << nama << endl;
    cout << "Nim saya: " << nim << endl;
    return 0;
}
*/

/*#include <iostream>
using namespace std;
int main(){
    int bil1 = 3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;
    hasil1 = bil1 + bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 - bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 * bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 / bil2;
    cout << hasil1 << endl;
    hasil1 = bil2 / bil1;
    cout << hasil1 << endl;
    hasil1 = bil1 % bil2; //modulo
    cout << hasil1 << endl;
    hasil1 = bil2 % bil1;
    cout << hasil1 << endl;
    hasil2 = bil3 / bil4;
    cout << hasil2 << endl;
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main (){
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2;
    cout << hasil <<endl;
    hasil = bil1 < bil2;
    cout << hasil <<endl;
    hasil = bil1 <= bil2;
    cout << hasil <<endl;
    hasil = bil1 == bil2;
    cout << hasil <<endl;
    hasil = bil1 != bil2;
    cout << hasil <<endl;
    return 0;

}
*/

/*#include <iostream>

using namespace std;

int main(){
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 and bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2 or bil1 < bil2;
    cout << hasil << endl;
    hasil = not(bil1 >= bil2) or bil1 < bil2;
    cout << hasil << endl;
    return 0;

}
*/

/*#include <iostream>
using namespace std;
int main(){
    int nilai;
    cin >> nilai;
    if (nilai > 80) {
        cout << "A" << endl;
    } else{
        cout << "Bukan A" << endl;
    }
    return 0;
}
*/

/*#include <iostream>
using namespace std;

int main(){
    int a, b, bilangan;
    cout << "Masukan batas bawah: ";
    cin >> a;
    cout << "Masukan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++) {
        cout << "Bilangan" << bilangan << endl;
    }
    return 0;
}
*/

/*#include <iostream>

using namespace std;
int main(){
    int bilangan, asli, jumlah;

    cout << "Masukan bilangan asli: ";
    cin >> asli;

    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli) {
        if (bilangan % 2 == 0){
            jumlah += bilangan;
        }
        bilangan++;
    }
    cout << "Jumlah bilangan genap " << jumlah << endl;
    return 0;
} */

/*
#include <iostream>
using namespace std;

int main() {
    float bil1, bil2;

    cout << "Masukkan bilangan Pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan Kedua: ";
    cin >> bil2;

    // Menampilkan hasil operasi matematika
    cout << "Hasil penjumlahan: " << bil1 + bil2 << endl;
    cout << "Hasil pengurangan: " << bil1 - bil2 << endl;
    cout << "Hasil perkalian: " << bil1 * bil2 << endl;

    if (bil2 != 0) {
        cout << "Hasil pembagian: " << bil1 / bil2 << endl;
    } else {
        cout << "Pembagian tidak dapat dilakukan." << endl;
    }
    return 0;
}
*/

/*

#include <iostream>
#include <string>
using namespace std;
int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;


 */

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Inputkan angka: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int k = i; k >= 1; k--) {
            cout << k << " ";
        }
        cout << "* ";
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    cout << "*\n";

    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main(){
    int number;
    string array[]={"","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan","sepuluh",
                    "sebelas","dua belas", "tiga belas", "empat belas","lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas", "dua puluh",
                    "tiga puluh","empat puluh","lima puluh","enam puluh","tujuh puluh","delapan puluh", "sembilan puluh"};

    cout <<"masukan angka : ";
    cin >> number;

    if (number >=100){
        int angkapalingkiri = number /100;
        cout << array[angkapalingkiri]<< "seratus";
        number -= angkapalingkiri *100;
    }
    if (number > 20){
            int angkapalingkiri = number /10;
            cout << array[18 + angkapalingkiri]<< " ";
            number -= angkapalingkiri *10;
    }
    cout << array[number];
    return 0;
}
*/
