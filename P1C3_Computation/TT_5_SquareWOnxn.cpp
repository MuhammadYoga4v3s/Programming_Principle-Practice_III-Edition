/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Senin, 28-Juli-2025
 *  Tempat    : Kudus, 20:55 UTC+7
 *  Deskripsi : Sebuah program yang menghitung bilangan kuadrat n*n dengan fungsi
                Tanpa operasi perkalian */

// Implement square() without using the multiplication operator; that is, do the 
// x∗x byrepeated addition (start a variable result at 0 and add x to it x times). 
// Then run some version of ‘‘the first program’’ using that square().

#include <iostream>
using namespace std;

int square(int x){
    int result = 0;
    for(int i=0; i < x; i++){
        result += x;
    }
    return result;
}

// Application of square() : print all i and i*i for all 0 <= i <= 100
int main(){
    int i = 0;
    cout << "Here's All i and i*i\ni\ti*i\n";
    while(i <= 100){
        cout << i << '\t' << square(i) << '\n';
        i++;
    }
    return 0;
}