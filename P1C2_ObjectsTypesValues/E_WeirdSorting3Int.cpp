/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 11:40 UTC+7
*   Deskripsi : Program untuk menyortir tiga int berdasarkan urutan numerik */

// Write a program that prompts the user to enter three integer values, and then outputs the val
// ues in numerical sequence separated by commas. So, if the user enters the values 10 4 6, the
//  output should be 4, 6, 10. If two values are the same, they should just be ordered together.
//  So, the input 4 5 4 should give 4, 4, 5.

#include <iostream>
using namespace std;

int main() {
    cout << "Enter Three Integer named A, B, and C (separated by spaces)\n"
         << "We will Try to sort them in numerical sequence : \n";
    int A = -999, B = -999, C = -999;
    cin >> A >> B >> C;
    cout << "Here's the sorted version of your 3 number\n";
    // since sorting technique isnt introduce yet, i try to bruteforce everything
    if(A > B){
        if(B > C){
            cout << C << ", " << B << ", " << A;
        } else if( A > C){
            cout << B << ", " << C << ", " << A;
        } else{
            cout << B << ", " << A << ", " << C;
        }
    }else{
        if(A > C){
            cout << C << ", " << A << ", " << B;
        } else if(B > C){
            cout << A << ", " << C << ", " << B;
        } else{
            cout << A << ", " << B << ", " << C;
        }
    }
}