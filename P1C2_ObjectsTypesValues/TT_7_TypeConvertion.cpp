/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Minggu, 21-Juli-2025
*   Tempat    : Kudus, 17:29 UTC+7
*   Deskripsi : Eksperimen Konversi Tipe */

// these program is an experiment, the purpose of this is to see hwo the data flow
// bertween different data type
// To Terminate the Program : ctrl + z + enter

#include <iostream>
using namespace std;

int main(){
    double d = 0;
    while(cin >> d){ // repeat the statements below as long as we type in numbers
        int i = d;   // try to squeeze a floating-point value into an integer value
        char c = i;  // tr y to squeeze an integer into a char
        cout << "d == " << d               // the original double
             << "\ni == " << i             // double converted to int
             << "\nc == " << (int)c        // int value of int converted to char
             << "\nchar(" << c << ")\n";   // the char2
    }
}

// Run this program and try to input this one by one
/*Run this program with a variety of inputs:
 • Small values (e.g., 2).
    d == 2
    i == 2
    c == 2
    char() // char didnt not print anything, it just a character that not visible
 • Large values (1000).
    d == 1000
    i == 1000
    c == -24 // 1000 % 256 - 256
    char(Φ)
 • Neg ative values.
    d == -9
    i == -9
    c == -9 // -9 % 256 - 256
    char(≈)
 • Non-integer values (e.g., 56.9 and 56.2).
    Has no problem since the double value got trunced (rownded down)*/