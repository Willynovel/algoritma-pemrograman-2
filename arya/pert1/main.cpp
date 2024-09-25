#include <iostream>
using namespace std;

// Function untuk mendapatkan harinya
string getDayFromCode(int kode) {
    
    switch(kode) {
        case 1: return "Senin dari Arya Fadhil Sagitarisandy | 231011400263 | 03TPLE006";
        case 2: return "Selasa dari Arya Fadhil Sagitarisandy | 231011400263 | 03TPLE006";
        case 3: return "Rabu dari Arya Fadhil Sagitarisandy | 231011400263 | 03TPLE006";
        case 4: return "Kamis dari Arya Fadhil Sagitarisandy | 231011400263 | 03TPLE006";
        case 5: return "Jumat dari Arya Fadhil Sagitarisandy | 231011400263 | 03TPLE006";
        case 6: return "Sabtu dari Arya Fadhil Sagitarisandy | 231011400263 | 03TPLE006";
        case 7: return "Minggu dari Arya Fadhil Sagitarisandy | 231011400263 | 03TPLE006";
        default: return "Kode tidak valid";
    }
}

int main() {
    int kode;

    //Nama Saya
    cout << "TUGAS AKHIR 1 | Halo, saya Arya Fadhil Sagitarisandy | 231011400263 | 03TPLE006" << endl;
    
    // Inputan dari terminal
    cout << "Masukkan kode (1-7): ";
    cin >> kode;

    // Outputnya
    cout << "Hari: " << getDayFromCode(kode) << endl;

    return 0;
}
