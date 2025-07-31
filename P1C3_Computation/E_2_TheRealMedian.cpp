/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 14:39 UTC+7
 *  Deskripsi : sebuah program yang menghitung median semua kiumpulan data*/

// If we define the median of a sequence as ‘‘a number so that exactly as many elements 
// come before it in the sequence as come after it,’’ fix the program in §3.6.3 so that 
// it always prints out a median. Hint: A median need not be an element of the sequence

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cout << "Imagine you are a scientist that collect a data of temperatures\n"
         << "Input all of your data here : (if you done press '|')\n";
    vector<double> temps;           // temperatures
    for (double temp; cin>>temp;)  // read into temp
        temps.push_back(temp);    // put temp into vector
    
    // compute mean temperature:
    double sum = 0;
    for (double x : temps)
    sum += x;
    cout << "Average temperature: " << sum/temps.size() << '\n';

    // compute median temperature:
    sort(temps.begin(), temps.end()); //sort the temperatures
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';
    return 0;
}