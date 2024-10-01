#include <iostream>
using namespace std;

void tukar (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int bil1, bil2;
    cout<<"masukan bilangan pertama: ";
    cin >> bil1;
    cout<<"masukan bilangan kedua: ";
    cin >> bil2;
    cout<<"sebelum pertukaran: \n";
    cout<<"bil1: " <<bil1<< "bil2: " <<bil2<<endl;
    tukar(&bil1, &bil2);
    cout<<"setelah pertukaran: \n";
    cout<< "bil1: " <<bil1<< "bil2: " <<bil2 <<endl;
    return 0;
}