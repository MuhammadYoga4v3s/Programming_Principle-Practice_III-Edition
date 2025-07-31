/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 04:32 UTC+7
 *  Deskripsi : Sebuah Program yang terus meminta 2 buah bilangan integer dan
                menampilkannya hingga di input '|' */

// Write a program that consists of a while-loop that (each time around the loop) reads in
//  two ints and then prints them. Exit the program when a terminating '|' is entered.

#include <iostream>
using namespace std;

int main(){
    cout << "Please, Enter a Pair of integer, with space "
         << "Such as : x y\n" 
         << "We will output it again and that's it :)\n"
         << "To Terminate it, please click the character '|'\n";
    int first = 0, second = 0;
    while(cin >> first >> second){
        cout << "Your first number : " << first
             << "\nN Your second number : " << second
             << '\n';
    }
}