/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 22 September 2021
Deskripsi : Program langkah-langkah dalam penyelesaian puzzy menara hanoi
*/

#include <iostream>

using namespace std;

void hanoi(int n, char tiang_asal, char tiang_tambahan, char tiang_tujuan) {
    //Kamus Lokal

    //Algoritma
    if(n==0) {
        return;
    } else {
        hanoi(n-1, tiang_asal, tiang_tujuan, tiang_tambahan);
        cout << "Pindahkan piringan " << n << " dari " << tiang_asal << " ke " << tiang_tujuan << "\n";
        hanoi(n-1, tiang_tambahan, tiang_asal, tiang_tujuan);
    }
}

int main () {
    //Kamus Global
    int N;
    char tiang_asal2, tiang_tujuan2, tiang_tambahan2;

    //Algoritma
    cin >> N;
    cin >> tiang_asal2;
    cin >> tiang_tujuan2;

    if (tiang_asal2=='A') {
        if(tiang_tujuan2=='B') {
            tiang_tambahan2='C';
        } else {
            tiang_tambahan2='B';
        }
    } else if (tiang_asal2=='B') {
        if(tiang_tujuan2=='C') {
            tiang_tambahan2='A';
        } else {
            tiang_tambahan2='C';
        }
    } else {
        if(tiang_tujuan2=='A') {
            tiang_tambahan2='B';
        } else {
            tiang_tambahan2='A';
        }
    }

    hanoi(N, tiang_asal2, tiang_tambahan2, tiang_tujuan2);
}
