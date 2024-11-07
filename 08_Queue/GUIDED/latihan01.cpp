#include <iostream>
using namespace std;

const int maksimalQueue = 5; //maks antrian
int front = 0;
int back = 0;
string queueTeller [5];//fungsi pengecekan

bool isFull()
{//pengecekan antrian penuh atau tidak 
    if (back == maksimalQueue) 
    {
        return true;//=1
    }
    else {
        return false;
    }
}

bool isEmpty()
{//antriannya kosong atau tidak
    if(back == 0 )
    {
        return true;
    }else{
        return false;
    }
}

void enqueueAntrian(string data)
{
    if(isFull()){
        cout << "Antrian sudah penuh" << endl;
    }else{
        if(isEmpty()){
            //kondisi ketika queue kosong
            queueTeller[0]=data;
            front++;
            back++;
    }else{
            queueTeller[back] = data;
            back++;
        }
    }
}

void dequeueAntrian(){
    if (isEmpty()){
        cout<<"antrian kosong nih"<<endl;
    }else{
        for(int i=0; i <back -1; i++)
        {
            queueTeller[i] = queueTeller[i+1];//pindahkan elemen ke depan 
        }
        queueTeller[back-1] ="";//kosongkan elemen terakir
        back--;
    }
}

int countQueue(){
    //fungsi untuk menghitung banyak antrian 
    return back;
}

void clearQueue(){
    //fungsi untuk menghapus semua antrian 
    if(isEmpty())
    {
        cout<<"Antrian kosong"  << endl;
    }
    else{
        for(int i=0; i < back; i++)
        {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}

void viewQueue(){
    //fungsi untuk melihat antrin
    cout<< "data antrian teller" << endl;
    for (int i = 0; i <maksimalQueue; i++)
    {
        if (queueTeller[i]!="")
        {
            cout<< i + 1 <<"." <<queueTeller[i]<<endl;
        }else{
            cout<< i + 1 <<".(kosong)" <<endl;
        }
    }
}

int main (){
    enqueueAntrian("Andi");
    enqueueAntrian("Naya");
    viewQueue();
    cout<<"jumlah antrian = "<<countQueue() <<endl;
    dequeueAntrian();
    viewQueue();
    cout<<"jumlah antrian = "<<countQueue() <<endl;
    clearQueue();
    viewQueue();
    cout<<"jumlah antrian = "<<countQueue() <<endl;
    return 0;
}