/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 14:39 UTC+7
 *  Deskripsi : ebuah program yang menguraikan sebuah string ke dalam char
                dan karakter integer per-char*/

// Write a program that reads a string from input and then, for each character read, 
// prints out the character and its integer value on a line.

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Please enter a Word and press enter after you enter it\n"
         << "Enter here : ";
    string words;
    cin >> words;
    // for every char in words
    // string is a list of char, string s = "APPLE", s[0] == 'A'...
    cout << words << " is construct with these letters : \n";
    for(char letter : words){
        int i = letter;
        cout << letter << " In ASCII: " << i << '\n';
    }
    return 0;
}