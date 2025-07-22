/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 05:43 UTC+7
*   Deskripsi : Sebuah program yang menginteraksikan operator dan antara 2 floating-point */

// Modify the program TwoIntVariables to ask the user to enter floating-point values and store 
// them in double variables. Compare the outputs of the two programs for some inputs of your choice.
// Are the results the same? Should they be? What’s the difference?

#include <iostream>
using namespace std;

int main(){
    double val1 = -999.9 , val2 = -999.9; // assume -999.9 indicate an integer is empty
    cout << "Please, Enter a value of a floating-point named val1 here : ";
    cin >> val1;
    cout << "Enter another value of a floating-point named val2 here : ";
    cin >> val2;
    double larger = -999.9, smaller = -999.9;

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
    cout << "\nThe Product, Difference, Sum, and ratio of those doubles are :"
         << "\n\tThe Sum: " << val1+val2
         << "\n\tThe Difference: " << larger-smaller
         << "\n\tThe Product: " << val1*val2
         << "\n\tThe Ratio: " << larger/smaller;

    // a floating value keep the decimal point from the ration
    // again, in C++ integer/integer would be integer
}