/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Senin, 28-Juli-2025
 *  Tempat    : Kudus, 17:10 UTC+7
 *  Deskripsi : Sebuah Program yang menulis urutan kode ASCII dengan kode ASCII-nya
                hanya menggunakan iterasi for-loop */

//  Rewrite the character value example from the previous TRY THIS to use a for-state
// ment. Then modify your program to also write out a table of the integer values for
// uppercase letters and digits.
// -------------------------------------------------------------------------------------
// We need to know that uppercase letters in ASCII start from 65 (which is 'A')
// and end at 90 (which is 'Z'). Digits start from 48 to 57 (which represent '0' to '9').

#include <iostream>
using namespace std;

int main(){
    int letterA = 'a';
    int ASCIIa = 97;

    int i = 0;
    // There are 62 interations
    for(int count = 0; count < 62; count++){
        char afterA = letterA + i;
        cout << afterA << '\t' << ASCIIa + i << '\n';
        if(afterA == 'z') i -= 58;
        if(afterA == 'Z') i -= 43;
        i++;
    }
}