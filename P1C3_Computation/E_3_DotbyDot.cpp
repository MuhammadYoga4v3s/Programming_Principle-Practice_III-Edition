/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 28-Juli-2025
 *  Tempat    : Kudus, 16:16 UTC+7
 *  Deskripsi : diberikan data jarak antar dua kota, print totalm jarak terpendek, 
                terpanjang dan rata rata*/

// Read a sequence of double values into a vector. Think of each value as the distance between
// two cities along a given route. Compute and print the total distance (the sum of all dis
// tances). Find and print the smallest and greatest distance between two neighboring cities.
// Find and print the mean distance between two neighboring cities.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "Please write down a data of distance from city A to city B, then city B to\n"
         << "city C, and so on until you reach the last city\n"
         << "if you done input it, press '|'\n";
    vector<double> citydistance;
    double maxdist = 0.0, mindist = 0.0;
    double meandist = 0.0, sumdist = 0.0;

    bool FirstValid = false;
    for(double temps; cin >> temps;){
        citydistance.push_back(temps);
        sumdist += temps;
        if(!FirstValid){
            FirstValid = true;
            maxdist = temps, mindist = temps;
        } else if(temps > maxdist){
            maxdist = temps;
        } else if(temps < mindist){
            mindist = temps;
        }
    }
    
    cout << "Thanks for the inputs of the Distance for each cities ?\n"
         << "Total distance   :\t" << sumdist
         << "\nMinimum distance :\t" << mindist
         << "\nMaximum distance :\t" << maxdist
         << "\nAverage distance :\t" << sumdist/citydistance.size();
}