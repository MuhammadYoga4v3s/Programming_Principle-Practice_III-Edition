/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Minggu, 21-Juli-2025
*   Tempat    : Kudus, 15:29 UTC+7
*   Deskripsi : Sebuah program yang menyapa Nama user dan menampilkan umurnya dalam bulan */

// these program will request your name and your age, you can write your age as 3.5 y/o :]
// then, these program will salute you by your name and your age in months

#include <iostream>
#include <string>    // C++ didnt understand string yet, it's a list of chars
using namespace std; // this is needed, so you wouldnt need to write std:: over and over again

int main() {
   // read name and age
   cout << "Please enter your first name and age\n";
   string first_name = "???"; // string variable ("???" indicates "don’t know the name")
   double age = -1.0;         // integer var iable (-1 means "don’t know the age")
   cin >> first_name >> age;  // read a string followed by an integer
   int ageInMonth = age*12;   // convert and assign the new value the a new variable
   cout << "Hello, " << first_name << " (age " << ageInMonth << ")\n";
}