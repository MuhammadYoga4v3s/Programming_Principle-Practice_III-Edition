/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Minggu, 21-Juli-2025
*   Tempat    : Kudus, 16:02 UTC+7
*   Deskripsi : Sebuah program yang meminta sebuah bilangan bulat dan mengeluarkan beberapa hasil
                operasinya  */

// these program will request an integer value, and will output some of it operation

#include <iostream>
#include <cmath>         // for some mathemathic operation such as square root
using namespace std;

int main() {
    // simple program to exercise operators
    cout << "Please enter an integer value named n: ";
    int n = 0;
    cin >> n;
    cout << "Please enter one more of integer value named b: ";
    int b = 0;
    cin >> b;
    cout << "n == " << n << ", b == " << b
         << "\nn+b == " << n+b
         << "\nn times b == " << b*n
         << "\ntwice n == " << n*2
         << "\nn squared == " << n*n
         << "\nhalf of n == " << n/2
         << "\nsquare root of n == " << sqrt(n)
         << "\nn mod b == " << n%b << ", b mod n == " << b%n
         << "\nn/b == " << n/b << ", b/n == " << b/n
         << "\nn and b is an integer, and integer/integer will give you an integer\n";      
 }