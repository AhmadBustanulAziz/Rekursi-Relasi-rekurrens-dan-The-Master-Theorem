/*
Nama      : Ahmad Bustanul Aziz
NIM       : 24060118120022
Matkul    : Analisis dan Strategi Algoritma
Tanggal   : 22 September 2021
Deskripsi : Menentukan bilangan n merupakan bilangan fibonacci atau tidak
*/

#include <iostream>

using namespace std;

//Fungsi untuk menentukan bilangan fibonacci secara rekursif
int Fibonacci(int n1, int n2) {
    //Kamus Lokal
    static int a = 0, b = 1, c = 1;

    //Algoritma
    if (c == n2) {
        return c;
    } else if (c < n2) {
        c = a + b;
        a=b;
        b=c;
        return Fibonacci(n1-1, n2);
    }
}

//Fungsi untuk menentukan posisi n bilangan fibonacci
int jumlahFibonacci (int n) {
    //Kamus Lokal
    int a = 0, b = 1, c = 1, jumlah = 1;

    //Algoritma
    while (c < n) {
        c = a + b;
        a=b;
        b=c;
        jumlah++;
    }

    return jumlah;
}

int main() {
    //Kamus Global
    int input[100], N, i, j;

    //Algoritma
    cin >> N;

    for (i=0;i<N;i++) {
        cin >> input[i];
    }

    for (j=0;j<N;j++) {
        if (Fibonacci(input[j], input[j]) == input[j]) {
            cout << "Menari " << jumlahFibonacci (input[j]) << " kali\n";
        } else {
            cout << "Melempar Pisang " << input[j] << " kali\n";
        }
    }
    return 0;
}
