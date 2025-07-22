/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 05:19 UTC+7
*   Deskripsi : Sebuah program yang menginteraksikan operator dan antara 2 integer */

// Write a program that prompts the user to enter two integer values. Store these values 
// in int variables named val1 and val2. Write your program to determine the smaller, larger, 
// sum, difference, product, and ratio of these values and report them to the user.

#include <iostream>
using namespace std;

int main(){
    int val1 = -999, val2 = -999; // assume -999 indicate an integer is empty
    cout << "Please, Enter a value of an integer named val1 here : ";
    cin >> val1;
    cout << "Enter another value of an integer named val2 here : ";
    cin >> val2;
    int larger = -999, smaller = -999;

    // smaller and larger
    if(val1 > val2){
        larger = val1;
        smaller = val2;
        cout << "The Smaller Number between " << val1 << " and " << val2
             << " is " << smaller
             << "\nand The larger number between " << val1 << " and " << val2
             << " is " << larger;
    } else {
        larger = val2;
        smaller = val1;
        cout << "The Smaller Number between " << val1 << " and " << val2
             << " is " << smaller
             << "\nand The larger number between " << val1 << " and " << val2
             << " is " << larger;
    }

    // sum, difference, product, and ratio
    cout << "\nThe Product, Difference, Sum, and ratio of those integers are :"
         << "\n\tThe Sum: " << val1+val2
         << "\n\tThe Difference: " << larger-smaller
         << "\n\tThe Product: " << val1*val2
         << "\n\tThe Ratio: " << larger/smaller;
}