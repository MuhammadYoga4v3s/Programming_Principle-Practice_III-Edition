/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Minggu, 21-Juli-2025
*   Tempat    : Kudus, 16:02 UTC+7
*   Deskripsi : Sebuah program yang meminta sebuah bilangan real dan mengeluarkan beberapa hasil
                operasinya  */

// these program will request a real value, and will output some of it operation

#include <iostream>
#include <cmath>         // for some mathemathic operation such as square root
using namespace std;

int main() {
    // simple program to exercise operators
    cout << "Please enter a floating-point value: ";
    double n = 0;
    cin >> n;
    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared == " << n*n
         << "\nhalf of n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << '\n';
 }