#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{

    float praktikum = 75, uts = 70, uas = 88, NilaiAkhir;
    cout << "Tugas 3 Praktikum Algoritma dan Pemrograman" << endl;
    cout << "Mencari Nilai Akhir Mahasiswa" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Nilai Praktikum : " << praktikum << endl;
    cout << "Nilai UTS : " << uts << endl;
    cout << "Nilai UAS : " << uas << endl;
    NilaiAkhir = (praktikum*0.2) +  (uts*0.3) + (uas*0.5);
    cout << "Nilai Akhir Mata Mahasiswa Tersebut Adalah : " << NilaiAkhir << endl;

    return 0;
}
