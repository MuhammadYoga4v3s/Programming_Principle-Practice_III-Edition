/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Rabu, 30-Juli-2025
 *  Tempat    : Kudus, 19:43 UTC+7
 *  Deskripsi : program yang meminta sebuah input n dan menampilkan N buah bilangan
                prima pertama*/

// Write a program that takes an input value n and then finds the first n primes.

#include <iostream>
#include <vector>
#include <cmath>      // for log(X)
#include <algorithm>  // for max()
using namespace std;

int main(){
    cout << "input an integer N"
         << "\nWe will print all first N primes for you\n"
         << "Input here : ";
    int N;
    cin >> N;
    // math error log(log(0)) is undefined, will happen if N < 5
    int numtocheck = max(20, int(N * log(N) + N * log(log(N))));
    // there's a theory that first N prime would in the range of 
    // [1..N * log(N) + N * log(log(N))]

    // we will use SIEVE OF ERATOSTHENES here
    vector<bool> isprime(numtocheck,1);
    isprime[0] = false; isprime[1] = false;

    vector<int> prime;
    for(int i = 2; i <= numtocheck; i++){
        if(isprime[i] == 1){
            // i*i not i+1, faster!
            for(int j = i*i; j <= numtocheck; j++){
                if(j%i == 0){
                    isprime[j] = 0;
                }
            }
            prime.push_back(i);
        }
    }
    cout << "the first " << N << " primes are : \n";
    for(int temp = 0; temp < N; temp++){
        cout << prime[temp] << '\t';
    }
}
