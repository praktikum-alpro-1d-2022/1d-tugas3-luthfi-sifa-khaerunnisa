#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    float Y, b = 25, x = 15, c = 20;

    cout << "Tugas 3 Praktikum Algoritma dan Pemrograman" << endl;
    cout << "Buat program untuk menyelesaikan rumus" << endl;
    cout << "------------------------------------------------" << endl;
    cout << "Selesaikan rumus Y = bx^2 + 0,5x -c" << endl;
    cout << "dimana nilai b = 25, x= 15, c =20" << endl;
    cout << "" << endl;
    cout << "Y = 25(15)^2 + 0,5(15) - 20" << endl;
    Y = (b*x*x) +(0.5*x) - c;
    cout << "Jadi, hasil penyelesaian rumus Y adalah : " << Y << endl;

    return 0;
}
