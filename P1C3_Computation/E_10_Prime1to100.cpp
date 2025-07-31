/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Rabu, 30-Juli-2025
 *  Tempat    : Kudus, 19:32 UTC+7
 *  Deskripsi : Program ini mencari semua bilangan prima dari 1-100, setiap bilangan prima 
                dimasukkan ke dalam vector, dan menampilkannya setelah semuanya didapat */

// Create a program to find all the prime numbers between 1 and 100. One way to do this is to
//  write a function that will check if a number is prime (i.e., see if the number can be divided by
//  a prime number smaller than itself) using a vector of primes in order (so that if the vector is
//  called primes, primes[0]==2, primes[1]==3, primes[2]==5, etc.). Then write a loop that goes
//  from 1 to 100, checks each number to see if it is a prime, and stores each prime found in a
//  vector. Write another loop that lists the primes you found. You might check your result by
//  comparing your vector of prime numbers with primes. Consider 2 the first prime.

#include <iostream>
#include <vector>
using namespace std;

// a function to check if a number is a prime
// we only need to check if the number isn't devisible by any factor of it
// a max factor of a number is sqrt of the number itself
bool isPrime(int num){
    bool isprime = 1; // assume num is prime
    for(int i = 2; i*i <= num; i++){
        if(num%i==0){ // if it has a factor
            isprime = 0; 
            break;
        }
    }
    return isprime;
}

int main(){
    vector<int> prime;
    for(int i = 2; i <= 100; i++){
        if(isPrime(i)){
            prime.push_back(i);
        }
    }
    cout << "Here's a list of a prime number between 1-100 : \n";
    for(int temp : prime){
        cout << temp << '\t';
    } cout << "\nThere are " << prime.size() << " primes\n";
}