/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 04:45 UTC+7
 *  Deskripsi : Sebuah Program yang terus meminta 2 buah bilangan integer dan
                menampilkan bilangan terbesar dan terkecil hingga diinput '|' */

// From D_2_2Numbers
// Augment the program so that it writes the line the numbers are equal (only) if they are
//  equal.

#include <iostream>
using namespace std;

int main(){
    cout << "Please, Enter a Pair of integer, with space "
         << "Such as : x y\n" 
         << "We will output it again, the biggest and the smallest :)\n"
         << "Or if the two numbers are the same, we will tell you\n"
         << "To Terminate it, please click the character '|'\n";
    int first = 0, second = 0;
    while(cin >> first >> second){
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
    }
}