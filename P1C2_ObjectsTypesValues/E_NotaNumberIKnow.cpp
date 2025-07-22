/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 12:05 UTC+7
*   Deskripsi : Program untuk mencetak sebuah integer dari inputan sebuah string*/

// Write a program that converts spelled-out numbers such as ‘‘zero’’ and ‘‘two’’ into digits,
// such as 0 and 2. When the user inputs a number, the program should print out the corre
// sponding digit. Do it for the values 0, 1, 2, 3, and 4 and write out "not a number I know" if the
// user enters something that doesn’t correspond, such as "stupid computer!".

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Input numbers in String, you can write it in all Upper Case, "
         << "all lower case, or the first letter is Upper case, but not others !\n"
         << "Please only write a number 0 to 9, to exit click ctrl + Z + enter\n"
         << "ENTER YOUR NUMBERs HERE : \n";
    string s = "???";
    while(cin >> s){
        if(s == "zero" || s == "ZERO" || s == "Zero"){
            cout << 0 << "\n";
        } else if(s == "one" || s == "ONE" || s == "One"){
            cout << 1 << "\n";
        } else if(s == "two" || s == "TWO" || s == "Two"){
            cout << 2 << "\n";
        } else if(s == "three" || s == "THREE" || s == "Three"){
            cout << 3 << "\n";
        } else if(s == "four" || s == "FOUR" || s == "Four"){
            cout << 4 << "\n";
        } else if(s == "five" || s == "FIVE" || s == "Five"){
            cout << 5 << "\n";
        } else if(s == "six" || s == "SIX" || s == "Six"){
            cout << 6 << "\n";
        } else if(s == "seven" || s == "SEVEN" || s == "Seven"){
            cout << 7 << "\n";
        } else if(s == "eight" || s == "EIGHT" || s == "Eight"){
            cout << 8 << "\n";
        } else if(s == "nine" || s == "NINE" || s == "Nine"){
            cout << 9 << "\n";
        } else{
            cout << "You really try it huh ?, Sorry, Not a Number I Know\n"
                 << "To Exit Please click ctrl + Z + enter\n";
        }
    }
}