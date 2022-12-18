#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    float alas = 8, tinggi = 10, SisiMiring;

        cout << "Tugas 3 Praktikum Algoritma dan Pemrograman" << endl;
        cout << "Mencari Nilai Sisi Miring Segitiga" << endl;
        cout << "------------------------------------------------" << endl;
        cout << "Nilai Alas : " << alas << endl;
        cout << "Nilai Tinggi : " << tinggi << endl;
        SisiMiring = sqrt (pow(alas,2)+pow(alas,2));
        cout << "Nilai Sisi Miring Segitiga Tersebut Adalah : " << SisiMiring << endl;

    return 0;
}
