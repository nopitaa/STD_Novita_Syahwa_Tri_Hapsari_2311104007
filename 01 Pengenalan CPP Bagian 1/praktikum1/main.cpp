/*
#include <iostream>
using namespace std;
int main(){
int inp;
cin >> inp;
cout << "nilai = " << inp;
return 0;
} */


/*#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float W, X, Y; float Z;
    X = 7; Y = 3; W = 1;
    Z =( X + Y)/(Y + W);
    cout<< "Nilai Z = " << Z << endl;
    return 0;
}*/

/*
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
char x;
float y;
cout << "ukuran variabel char " <<sizeof(x)<<endl;
cout << "ukuran variabel float " <<sizeof(y)<<endl;
cout << "ukuran variabel int " <<sizeof(int)<<endl;
getch();
return 0;
}
*/

/*#include <iostream>

using namespace std;
int main(){
    double tot_pembelian, diskon;
    cout<<"total pembelian: Rp";
    cin>>tot_pembelian;
    diskon = 0;
    if (tot_pembelian >= 100000)
        diskon = 0.05*tot_pembelian;
    else
        diskon = 0;
        cout<<"besar diskon = Rp"<<diskon;

}*/

/*
#include <stdio.h>
int main(){
    int kode_hari;
    puts("Menentukan hari\n");
    puts("1=Senin 3=Rabu 5=Jumat 7=Minggu ");
    puts("2=Selasa 4=Kamis 6=Sabtu ");
    cin>>kode_hari;
    switch(kode_hari){
    case 1:
        puts("Hari Senin");
        break;
    case 2:
        puts("Hari Selasa");
        break;
    case 3:
        puts("Hari Rabu");
        break;
    case 4:
        puts("Hari Kamis");
        break;
    case 5:
        puts("Hari Jumat");
        break;
    case 6:
        puts("Hari Sabtu");
        break;
    case 7:
        puts("Hari Minggu");
        break;
    default:
        puts("Kode yang anda masukan salah!!!");
        }
        return 0;
*/

/*
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int i=1;
    int jum;
    cin>>jum;
    do{
        cout<<"baris ke- "<<i+1<<endl;
        i++;
    }while (i<jum);
    getch();
    return 0;
}
*/
/*
#include <iostream>
#include <conio.h>
#define MAX 5

using namespace std;
int main (){
    int i;
    struct data{
        char nama[40];
        int nilai;
    };
    data siswa [MAX];
    for (i=0; i<MAX; i++){
        cout << "Masukan data ke - " << i+1 <<endl;
        cout << "Nama = ";
        cin>>siswa[i].nama;
        cout<<"Nilai = ";
        cin>>siswa[i].nilai;
    }
    cout<<"\ndata siswa\n";
    cout<<"=====";
    for (i=0; i<MAX; i++){
        cout<<"\n\ndata ke- "<<i+1;
        cout<<"\n\nnama= "<<siswa[i].nama;
        cout<<"\n\nnilai= "<<siswa[i].nilai;
    }
    getch();
    return 0;
}
*/







