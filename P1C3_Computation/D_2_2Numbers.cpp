/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 04:40 UTC+7
 *  Deskripsi : Sebuah Program yang terus meminta 2 buah bilangan integer dan
                menampilkan bilangan terbesar dan terkecil hingga diinput '|' */

// from D_1_2Numbers
// Change the program to write out the smaller value is: followed by the smaller of the num
// bers and the larger value is: followed by the larger value.

#include <iostream>
using namespace std;

int main(){
    cout << "Please, Enter a Pair of integer, with space "
         << "Such as : x y\n" 
         << "We will output it again, the biggest and the smallest :)\n"
         << "To Terminate it, please click the character '|'\n";
    int first = 0, second = 0;
    while(cin >> first >> second){
        if(first > second)
            cout << first << " is the biggest number between this two number\n"
                 << "while " << second << " is the smallest\n";
        else
            cout << second << " is the biggest number between this two number\n"
                 << "while " << first << " is the smallest\n";
    }
}