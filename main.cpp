#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits>

using namespace std;

int main()
{
    cout << "<==============================================================================================>" << endl;
    cout << "PERMAINAN TEBAK ANGKA SEDERHANA KELOMPOK 6 AI" << endl;
    cout << "NAMA ANGGOTA KELOMPOK :  1. DANIEL PASARIBU 2. IMANUEL LUMINTANG 3. GABRIEL WAWORUNDENG" << endl;
    cout << "KELAS                 :  TIK 2022-B" << endl;
    cout << "<==============================================================================================>" << endl;

    int angka, tebak, n = 0;
    char tebaklagi;
    string kategori[]={"Genius", "Hebat", "Keren"};


    srand(time(NULL));
    angka = rand() % 100 + 1;

    cout << "Ada Sebuah Angka 1-100. Cobalah untuk mulai menebak angka tersebut! \n";

    do {
        n++;
        cout << "Masukkan tebakan kamu: ";
        if (!(cin >> tebak)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Input tidak valid. Harap masukkan angka.\n";
            continue;
        }

        if (tebak < angka)
            cout << "JAWABAN SALAH !!! ANGKA YANG KAMU TEBAK TERLALU KECIL. \n";
        else if (tebak > angka)
            cout << "JAWABAN SALAH !!! ANGKA YANG KAMU TEBAK TERLALU BESAR. \n";

    } while (tebak != angka);

    if (n<=3){
        cout << kategori[0] << endl;
    }
    else if (n<=7){
        cout << kategori[1] << endl;
    }
    else if (n>7) {
        cout << kategori[2] << endl;
    }

    cout << "Jawaban Anda Benar! Kamu Telah Menebak sebanyak " << n << " kali. \n";
    cout << "Ingin Bermain Tebak Angka lagi? (y/n) = ";
    cin  >> tebaklagi;
    while(tebaklagi=='Y' || tebaklagi=='y');

    return 0;
}
