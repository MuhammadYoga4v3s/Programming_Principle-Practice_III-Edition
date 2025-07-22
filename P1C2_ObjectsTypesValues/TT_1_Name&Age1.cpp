/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Minggu, 21-Juli-2025
*   Tempat    : Kudus, 15:29 UTC+7
*   Deskripsi : Sebuah program yang menyapa Nama user dan menampilkan umurnya dalam bulan */

// these program will request your name and your age, you can write your age as 3.5 y/o :]
// then, these program will salute you by your name and your age in months

#include <iostream>
#include <string>    // C++ didnt understand string yet, it's a list of chars

int main() {
   // read name and age
   std::cout << "Please enter your first name and age\n";
   std::string first_name = "???"; // string variable ("???" indicates "don’t know the name")
   // You need std:: for string, since it now a really primitive type
   double age = -1.0;              // integer var iable (-1 means "don’t know the age")
   std::cin >> first_name >> age;  // read a string followed by an integer
   std::cout << "Hello, " << first_name << " (age " << age*12 << "Months )\n";
}