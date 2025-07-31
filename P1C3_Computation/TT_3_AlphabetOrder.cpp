/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Senin, 28-Juli-2025
 *  Tempat    : Kudus, 17:10 UTC+7
 *  Deskripsi : Sebuah Program yang menulis urutan alphabet dari a hingga z dengan kode 
                ASCII-nya hanya dengan iterasi */

// The character 'b' is char(’a’+1), 'c' is char(’a’+2), etc. Use a loop to write out a 
// table of characters with their corresponding integer values:
//  a 97
//  b 98
//  ...
//  z 122

#include <iostream>
using namespace std;

int main(){
    int ASCIIa = 97;
    char letterA = 'a';
    int i = 0;
    while(i < 26){
        char afterA = letterA + i;
        // You can't just cout << letterA + i, it will give you an integer
        cout << afterA << '\t' << ASCIIa+i << '\n';
        i++;
    }
    return 0;
}