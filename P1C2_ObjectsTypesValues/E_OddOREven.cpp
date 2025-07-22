/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 11:57 UTC+7
*   Deskripsi : Program untuk menentukan apakah sebuah bilangan genap atau ganjil*/

// Write a program to test an integer value to determine if it is odd or even. As always, make
// sure your output is clear and complete. In other words, don’t just output yes or no. Your 
// output should stand alone, like "The value 4 is an even number"

#include <iostream>
using namespace std;

int main() {
    cout << "Enter An Integer and Press enter after it\n"
         << "We will Let you know if your number odd or even \n";
    int N = -999;
    cin >> N;
    if(N%2 == 0){ // == not =
        cout << "The value " << N << " is an even number\n";
    } else{
        cout << "The value " << N << " is an odd number\n";
    }
}