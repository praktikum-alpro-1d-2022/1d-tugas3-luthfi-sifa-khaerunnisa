#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    char again;
    int choose;
    float V, I, R;
    cout << "Tugas 3 Praktikum Algoritma dan Pemrograman" << endl;
    cout << "Mencari Arus, Tegangan, Hambatan" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "1. Arus" << endl;
    cout << "2. Tegangan" << endl;
    cout << "3. Hambatan" << endl;
    cout << endl;

    {
        cout << "Masukkan pilihan anda : "<< endl;
        cin >> choose;
        system ("cls");
        switch (choose)
        {
        case 1 :
            {
                cout << "Anda memilih untuk mencari arus" << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Masukkan nilai Tegangan (V) : " << endl;
                cin >> V;
                cout << "Masukkan nilai Hambatan (R) : " << endl;
                cin >> R;
                I = V/R;
                cout << "Nilai Arus adalah : " << I << endl;
            }
        case 2 :
            {
                cout << "Anda memilih untuk mencari tegangan" << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Masukkan nilai Arus (I) : " << endl;
                cin >> I;
                cout << "Masukkan nilai Hambatan (R) : " << endl;
                cin >> R;
                V = I*R;
                cout << "Nilai Tegangan adalah : " << V << endl;
            }
        case 3 :
            {
                cout << "Anda memilih untuk mencari Hambatan" << endl;
                cout << "------------------------------------------------" << endl;
                cout << "Masukkan nilai Tegangan (V) : " << endl;
                cin >> V;
                cout << "Masukkan nilai Arus (I) : " << endl;
                cin >> I;
                R = V/I;
                cout << "Nilai Hambatan adalah : " << R << endl;
            }
        }
    }

    return 0;
}
