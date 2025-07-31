/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 05:09 UTC+7
 *  Deskripsi : Sebuah Program yang terus meminta sebuah bilangan real
                dan terus membandingkannya, lalu menentukan apakah bilangan tersebut
                terbesar selama ini, terkecil selama ini atau biasa aja */

// From D_4_2Numbers
// Now change the body of the loop so that it reads just one double each time around.
// Define two variables to keep track of which is the smallest and which is the 
// largest value you have seen so far. Each time through the loop write out the 
// value entered. If it’s the smallest so far, write the smallest so far after the 
// number. If it is the largest so far, write the largest so far after the number.

#include <iostream>
using namespace std;

int main(){
    cout << "Please enter real numbers continuously.\n"
         << "We will tell you whether the number is the smallest or the largest so far.\n"
         << "If it's neither, we will also let you know.\n"
         << "If you're tired and want to stop, please type the character '|'.\n"
         << "START ENTERING NUMBERS BELOW (press Enter after each input):\n";
    double num = 0.0;
    cin >> num;
    double min = num, max = num;
    cout << "=======================================================\n"
         << num << " is the smallest and the greatest so far\n";
    while(cin >> num){
        cout << "=======================================================\n";
        if(num > max){
            max = num;
            cout << num << " is the biggest so far\n";
        } else if(num < min){
            min = num;
            cout << num << " is the smallest so far\n";
        } else {
            cout << num << " is neither the smallest or the biggest\n";
        }
    }
}
