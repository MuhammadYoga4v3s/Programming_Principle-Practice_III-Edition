/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 04:58 UTC+7
*   Deskripsi : Sebuah program eksperimen untuk melihhat bagaimana compiler reaxt
                terhadap tipe dengan nilai yang tidak sesuai */

// this program that doesn’t do anything, but declares a number of variables with legal and
// illegal names (such as int double = 0;), so that you can see how the compiler reacts.

#include <iostream>
using namespace std;

int main(){
    int intLegal, intIllegal;
    double doubleLegal, doubleIllegal;
    char charLegal, charIllegal;

    cout << "Enter a value of Integer : ";
    cin >> intLegal;
    cout << "Enter a value of another Integer : ";
    cin >> doubleIllegal;
    cout << "\tSure, your first integer is: " << intLegal
         << "\n\tAnd Your second is:" << doubleIllegal;
    // Double could take an integer value without a problem since 9 = 9.0
    
    cout << "\nEnter a value of a double now: ";
    cin >> intIllegal;
    cout << "Enter a value of another double : ";
    cin >> doubleLegal;
    cout << "\tSure, your first double is: " << intIllegal
         << "\n\tAnd Your second is:" << doubleLegal; 
    // if an integer got a double value, it will only take the integer part of it
    // but the remains of that value will be flow to the next input
    // which is Dangerous
         
    cout << "\nEnter a value of Integer 1-9 : ";
    cin >> charLegal;
    cout << "Enter a value of another Integer 10-99 : ";
    cin >> charIllegal;
    cout << "\tSure, your first integer is: " << charLegal
         << "\n\tAnd Your second is: " << charIllegal;
    // Char will only take he first char we input, but the remains will be keep as
    // an input of the next input
}