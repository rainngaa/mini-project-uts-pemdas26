// Kelompok 7 - Sistem Pengelolaan Nilai Sekolah
// Bagian 1: Data Siswa & Input (Sena)
 
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string nis, nama;
    double nilaiTugas, nilaiUTS, nilaiUAS;
    char ulang;
 
    do {
        // Input data siswa
        cout << "\nMasukkan NIS         : ";
        getline(cin, nis);
        cout << "Masukkan nama siswa  : ";
        getline(cin, nama);
 
        // Input nilai + validasi 0-100 (do-while)
        do {
            cout << "Masukkan nilai Tugas : ";
            cin >> nilaiTugas;
            if (cin.fail()) { cin.clear(); cin.ignore(1000, '\n'); nilaiTugas = -1; }
            if (nilaiTugas < 0 || nilaiTugas > 100)
                cout << "Nilai harus 0 - 100.\n";
        } while (nilaiTugas < 0 || nilaiTugas > 100);
 
        do {
            cout << "Masukkan nilai UTS   : ";
            cin >> nilaiUTS;
            if (cin.fail()) { cin.clear(); cin.ignore(1000, '\n'); nilaiUTS = -1; }
            if (nilaiUTS < 0 || nilaiUTS > 100)
                cout << "Nilai harus 0 - 100.\n";
        } while (nilaiUTS < 0 || nilaiUTS > 100);
 
        do {
            cout << "Masukkan nilai UAS   : ";
            cin >> nilaiUAS;
            if (cin.fail()) { cin.clear(); cin.ignore(1000, '\n'); nilaiUAS = -1; }
            if (nilaiUAS < 0 || nilaiUAS > 100)
                cout << "Nilai harus 0 - 100.\n";
        } while (nilaiUAS < 0 || nilaiUAS > 100);
 
        // Menampilkan data siswa
        cout << "\n--- DATA SISWA ---\n";
        cout << "NIS         : " << nis << endl;
        cout << "Nama        : " << nama << endl;
        cout << "Nilai Tugas : " << nilaiTugas << endl;
        cout << "Nilai UTS   : " << nilaiUTS << endl;
        cout << "Nilai UAS   : " << nilaiUAS << endl;
 
        // Cek remedial: UTS atau UAS kurang dari 50
        if (nilaiUTS < 50 && nilaiUAS < 50) {
            cout << "Keterangan  : REMEDIAL (UTS dan UAS)\n";
        } else if (nilaiUTS < 50) {
            cout << "Keterangan  : REMEDIAL (UTS)\n";
        } else if (nilaiUAS < 50) {
            cout << "Keterangan  : REMEDIAL (UAS)\n";
        } else {
            cout << "Keterangan  : Tidak remedial\n";
        }
 
        // Perulangan proses: input siswa lain?
        cout << "\nInput siswa lain? (y/n): ";
        cin >> ulang;
        cin.ignore(1000, '\n');
    } while (ulang == 'y' || ulang == 'Y');
 
    return 0;
}
