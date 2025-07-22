/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 11:51 UTC+7
*   Deskripsi : Program untuk menyortir tiga string berdasarkan urutan alfabet (ASCII) */

// Do exercise E_WeirdSorting3Int, but with three string values. So, if the user enters the values 
// Steinbeck, Hemingway, Fitzg erald, the output should be Fitzg erald, Hemingway, Steinbeck.

#include <iostream>
#include <string>    // Never Forget to Add String Library when you do something with string
using namespace std;

int main() {
    cout << "Enter Three String named A, B, and C (separated by spaces)\n"
         << "We will Try to sort them in Alphabethic ASCII sequence : \n";
    string A = "???", B = "???", C = "???";
    cin >> A >> B >> C;
    cout << "Here's the sorted version of your 3 string\n";
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