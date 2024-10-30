#include <iostream>
using namespace std;

string arrayBuku [5];
int maksimal = 5, top = 0;

bool isFull(){ //Fungsi ini mengembalikan nilai true jika stack penuh
    return top == maksimal;
}
bool isEmpty(){ //Fungsi ini mengembalikan true jika stack kosong
    return top == 0;
}

void pushArrayBuku(string data){
    if (isFull()) {
        cout << "Data sudah penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku(){//Fungsi ini menghapus elemen teratas dari stack.
    if (isEmpty()) {
        cout << "Tidak ada data yang dihapus" << endl;

}else{
    arrayBuku[top -1] = "";
    top--;
    }
}

void peekArrayBuku(int posisi){//Fungsi ini menampilkan data pada posisi tertentu dari elemen teratas
    if (isEmpty){
        cout << "tidak ada data yang bisa dilihat" << endl;
    }else{
        int index = top - posisi;
        if(index >= 0 && index < top){
            cout << " posisi ke " << posisi << " adalah" << arrayBuku[index];
        } else{
            cout << "posisi di luar jangkauan " <<endl;
        }
    }
}
int countStack(){ //mengembalikan jumlah elemen saat ini di dalam stack
    return top;
}
void changeArrayBuku(int posisi, string data){ //Fungsi ini mengubah data di posisi tertentu pada stack
    int index = top - posisi;
    if (index >=0 && index < top){
        arrayBuku[index] = data;
    }else{
        cout << "posisis melebihi data yang ada" << endl;
    }
}
void destroyArrayBuku(){
    for (int i= top -1; i >= 0; i--){
        arrayBuku[i] = "";
    }
    top = 0;
}
void cetakArrayBuku(){
    if (isEmpty()){
        cout << "tidak ada data yang dicetak" << endl;
    }else{
        for (int i = top -1; i >= 0; i--){
            cout << arrayBuku[i] << endl;
        }
    }
}    

int main(){
    pushArrayBuku("Kalkulus");
    pushArrayBuku("struktur data");
    pushArrayBuku("matematika diskrit");
    pushArrayBuku("dasar multimedia");
    pushArrayBuku("inggris");

    cetakArrayBuku();
    cout <<"\n" << endl;

    cout << "apakah data stack penuh?" << (isFull()? "Ya" : "Tidak") << endl;
    cout << "apakah data stack kosong?" << (isFull()? "Ya" : "Tidak") << endl;

    peekArrayBuku(2);
    popArrayBuku();

    cout <<"Banyak data = " <<countStack() <<endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();
    cout <<"\n" <<endl;

    destroyArrayBuku();
    cout <<"Top setelah destroy: " <<top<<endl;
    cetakArrayBuku(); 

    return 0;
}