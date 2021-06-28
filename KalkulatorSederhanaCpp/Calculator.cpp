#include <iostream>
#include <math.h>

int main(void) {
    using namespace std;

    float NilaiA, NilaiB;
    int PilihanUser;
    int Total;
    

    cout << "Kalkulator Sederhana By Raka M.A" << std::endl;
    cout << "=====================================" << std::endl;
    cout << "Silahkan pilih tipe kalkulator:" << std::endl;
    cout << "[1] Pertambahan    [2] Pengurangan" << std::endl;
    cout << "[3] Perkalian      [4] Pembagian" << std::endl;
    cout << "=====================================" << std::endl;
    cout << "Pilihan anda: " << std::endl;
    cin >> PilihanUser;

    if (PilihanUser == 1){
        cout << "Pilihan yang dipilih: Pertambahan" << std::endl;
        cout << "=================================" << std::endl;
        cout << "Masukkan Nilai A: " << std::endl;
        cin >> NilaiA;
        cout << "Masukkan Nilai B: " << std::endl;
        cin >> NilaiB;
        cout << "================================";
        Total = NilaiA + NilaiB;
        cout << "================================" << std::endl;
        cout << "Hasil anda: " << Total;
        
        return 0;

    } else if (PilihanUser == 2) {
        cout << "Pilihan yang dipilih: Pengurangan" << endl;
        cout << "=================================" << std::endl;
        cout << "Masukkan Nilai A: " << std::endl;
        cin >> NilaiA;
        cout << "Masukkan Nilai B: " << std::endl;
        cin >> NilaiB;
        cout << "================================";
        Total = NilaiA - NilaiB;
        cout << "================================" << std::endl;
        cout << "Hasil anda: " << Total;
        
        return 0;
    } else if (PilihanUser == 3) {
        cout << "Pilihan yang dipilih: Perkalian" << endl;
        cout << "=================================" << std::endl;
        cout << "Masukkan Nilai A: " << std::endl;
        cin >> NilaiA;
        cout << "Masukkan Nilai B: " << std::endl;
        cin >> NilaiB;
        cout << "================================";
        Total = NilaiA * NilaiB;
        cout << "================================" << std::endl;
        cout << "Hasil anda: " << Total;

    } else if (PilihanUser == 4) {
        cout << "Pilihan yang dipilih: Pembagian" << endl;
        cout << "=================================" << std::endl;
        cout << "Masukkan Nilai A: " << std::endl;
        cin >> NilaiA;
        cout << "Masukkan Nilai B: " << std::endl;
        cin >> NilaiB;
        cout << "================================";
        Total = NilaiA / NilaiB;
        cout << "================================" << std::endl;
        cout << "Hasil anda: " << Total;
    } else {
        cout << "Pilihan tidak ada, coba lagi";
        return 1;
    }

    return 0;



}