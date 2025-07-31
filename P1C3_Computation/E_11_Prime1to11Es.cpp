/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Rabu, 30-Juli-2025
 *  Tempat    : Kudus, 19:43 UTC+7
 *  Deskripsi : Program ini mencari semua bilangan prima dari 1-100, setiap bilangan prima 
                dimasukkan ke dalam vector, dan menampilkannya setelah semuanya didapat 
                dengan metode "Sieve of Eratosthenes"*/

// Create a program to find all the prime numbers between 1 and 100. There is a classic method
//  for doing this, called the ‘‘Sieve of Eratosthenes.’’ If you don’t know that method, get on the
//  Web and look it up. Write your program using this method.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    // use bool , it's 1 bit, instead of int with 32 bits
    vector<bool> isprime(101); // it's prime(100) NOT prime[100], REMEMBER!!;
    // 101 cause we need to check from 1-100, not 0-99
    fill(isprime.begin()+2, isprime.end(), 1); // 0 and 1 is't prime, bool default is 0
    // fill(start, end, value to fill), assume 1-100 is prime
    // could also use vector<bool> isprime(101, true);

    vector<int> prime; // to save the primes, not is x prime
    // SIEVE OF ERATOSTHENES
    for(int i = 2; i <= 100; i++){
        if(isprime[i] != 0){
            for(int j = i*i; j <= 100; j++){
                if(j%i == 0){ // not prime, cause devisible by something
                    isprime[j] = 0;
                }
            }
            prime.push_back(i); // cause i != 0, it doesn't divisible by any other num smaller
        }
    }
        cout << "Here's a list of a prime number between 1-100 : \n";
    for(int temp : prime){
        cout << temp << '\t';
    } cout << "\nThere are " << prime.size() << " primes\n";
}