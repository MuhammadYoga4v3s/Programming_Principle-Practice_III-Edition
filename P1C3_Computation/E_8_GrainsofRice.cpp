/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Rabu, 30-Juli-2025
 *  Tempat    : Kudus, 10:58 UTC+7
 *  Deskripsi : program yang menghitung 2 angka 1-digit (baik di input dengan angka/string)
                dengan sebuah operasi +,/,*,- */

// There is an old story that the emperor wanted to thank the inventor of the game of chess and
// asked the inventor to name his reward. The inventor asked for one grain of rice for the first
// square, 2 for the second, 4 for the third, and so on, doubling for each of the 64 squares. That
// may sound modest, but there wasn’t that much rice in the empire! Write a program to calcu
// late how many squares are required to give the inventor at least 1000 grains of rice, at least
// 1,000,000 grains, and at least 1,000,000,000 grains. You’ll need a loop, of course, and probably 
// an int to keep track of which square you are at, an int to keep the number of grains on
// the current square, and an int to keep track of the grains on all previous squares. We suggest
// that you write out the value of all your variables for each iteration of the loop so that you can
// see what’s going on.
#include <iostream>
using namespace std;

int main(){
    int Nboard = 0;
    cout << "Enter a value N < 2^62\n"
         << "We will try to tell you how many chess square it takes\n"
         << "so it would atleast equal your number, we only has maximum 2^63 rice tho\n"
         << "Enter here : ";
    unsigned long long N = 0;
    cin >> N;

    // int only work for 2^32 - 1
    // while long long work for 2^63-1
    // unsigned = no negative, so it's +1 bit, make it 2^64 -1
    // double is weird, it save a big number till 1x10^308 but 
    // after that it couldn't be change - losing a value
    // Kalau double udah nyimpan angka besar banget, maka penambahan angka kecil (misalnya +1) 
    // nggak akan ngaruh — karena precision-nya udah gak cukup buat “ngeh” perubahan itu.
    unsigned long long sumRice = 0;
    if(N <= 9223372036854775807){
        for(unsigned long long i = 1; sumRice < N; i*=2){
            Nboard++;
            sumRice += i;
        }
        cout << "it takes " << Nboard << " square" << (Nboard != 1 ? "s" : "") 
             << " so it would atleast equal to " << N << " grains of rice\n"
             << "Yet you got " << sumRice << " grains of rice actually\n";
    } else cout << "N should be <= 2^62\n";
}