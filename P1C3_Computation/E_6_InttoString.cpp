/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Rabu, 30-Juli-2025
 *  Tempat    : Kudus, 10:00 UTC+7
 *  Deskripsi : program yang mengubah sebuah masukan dalam integer menjadi keluaran dalam
                bentuk string (hanya menerima 1 digit int)*/

// Make a vector holding the ten string values "z ero", "one", . . . "nine". Use that in a program
// that converts a digit to its corresponding spelled-out value; e.g., the input 7 gives the output
// seven. Hav e the same program, using the same input loop, convert spelled-out numbers into
// their digit form; e.g., the input seven gives the output 7.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    cout << "Enter a number that has only one digit! Just one digit!\n"
         << "If you enter more than one digit, only the first will be taken.\n"
         << "After that, we will tell you how the number is written in words.\n"
         << "Enter here: ";

    int num = 0;
    cin >> num;
    vector<string> numstr = {"zero", "one", "two", "three", "four", "five", "six", 
                            "seven", "eight", "nine"};
    if(num>9) num/=10; // to get only the first digit

    cout << num << " in string is " << numstr[num];
    return 0;
}