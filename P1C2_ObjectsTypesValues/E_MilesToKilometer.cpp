/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 04:53 UTC+7
*   Deskripsi : Sebuah program yang mengkonversi mile ke Kilometer */

// these program will request a double that represented Miles, and will output the
// Kilometer version of it

#include <iostream>
using namespace std;

int main() {
    cout << "Enter a Number represented as Miles\n"
         << "We will Try to convert it into KiloMeter : \n";
    double miles = -1;
    cin >> miles;
    cout << miles << " Miles is " << miles*1.609 << " KiloMeter";
}