#include <iostream>
using namespace std;
int kendaraan(int kapasitas_kendaraan, int jumlah_penumpang){
    int jumlah;
    jumlah = jumlah_penumpang/ kapasitas_kendaraan;
    if (jumlah_penumpang % kapasitas_kendaraan > 0){
        jumlah++;
    }
    return jumlah;
}

int main(){
    int kap_kendaraan, jum_penumpang, banyak_kendaraan;
    cout<<"masukan kapasitas kendaraan:";
    cin>> kap_kendaraan;
    cout<<"masukan jumlah penumpang:";
    cin>> jum_penumpang;
    banyak_kendaraan = kendaraan(kap_kendaraan, jum_penumpang);
    cout <<"Banyak kendaraan yang di sewa = " << banyak_kendaraan <<endl;
    return 0;
}