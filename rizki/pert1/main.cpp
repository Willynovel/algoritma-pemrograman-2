#include <iostream>
using namespace std;

int main() {
    int kode;

    // Meminta input dari pengguna
    cout << "Masukkan kode (1-7): ";
    cin >> kode;

    // Mengecek kode dan mencetak hari sesuai
    switch (kode) {
        case 1:
            cout << "Hari Senin" << endl;
            break;
        case 2:
            cout << "Hari Selasa" << endl;
            break;
        case 3:
            cout << "Hari Rabu" << endl;
            break;
        case 4:
            cout << "Hari Kamis" << endl;
            break;
        case 5:
            cout << "Hari Jumat" << endl;
            break;
        case 6:
            cout << "Hari Sabtu" << endl;
            break;
        case 7:
            cout << "Hari Minggu" << endl;
            break;
        default:
            cout << "Kode yang dimasukkan salah! Harap masukkan angka antara 1 sampai 7." << endl;
    }

    return 0;
}