/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 05:26 UTC+7
 *  Deskripsi : Sebuah Program yang terus meminta 2 buah bilangan real dan
                dan membandingkan keduanya */

// From D_4_2Numbers
// Change the program so that it writes out the numbers are almost equal after writing out
// which is the larger and the smaller if the two numbers differ by less than 1.0/100.

#include <iostream>
using namespace std;

int main(){
    constexpr double differ = 1.0/100;
    cout << "Please, Enter a Pair of Real number, with space "
         << "Such as : x y\n" 
         << "We will output it again, the biggest and the smallest :)\n"
         << "Or if the two numbers are the same, we will tell you\n"
         << "To Terminate it, please click the character '|'\n";
    // ----------------------------------------------------------------------
    double first = 0.0, second = 0.0;
    while(cin >> first >> second){
        // Problem: cout only shows ~6 digits for floating-point by default
        if(first == second)
            cout << "===========================================\n"
                 << "the numbers are equal\n" 
                 << first << " are identical with " << second << '\n';
        else if(first > second)
            cout << "===========================================\n"
                 << first << " is the biggest number between this two number\n"
                 << "while " << second << " is the smallest\n";
        else
            cout << "===========================================\n"
                 << second << " is the biggest number between this two number\n"
                 << "while " << first << " is the smallest\n";
        //------ after writing out which is the larger and the smaller ------
        if(first-second <= differ)
            cout << "the numbers are almost equal\n";
    }
}