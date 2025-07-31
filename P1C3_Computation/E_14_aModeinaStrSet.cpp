/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Kamis, 31-Juli-2025
 *  Tempat    : Kudus, 12:12 UTC+7
 *  Deskripsi : program yang meminta input string terus menerus dan menampilkan modus 
                dari seluruh masukan yang diberikan*/

// Write a program that finds the min, max, and mode of a sequence of strings.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Program idea, create a new vector called freq which count freq[strings[i]]
int inputloc(string N, vector<string> strings){
    int found = 0;
    for(string temp : strings){
        if(temp == N){
            break;
        } found++;
    }
    return found;
}

int main(){
    cout << "input a set of string, when you done write click ctrl + Z and enter\n"
         << "we will tell you the mode, min, and max value of that set of string :)\n"
         << "enter here : ";
    string N = "???";
    vector<string> strings;

    while(cin >> N){
        strings.push_back(N);
    }
    // Done inputing
    vector<int> freq(strings.size(),0);
    // count a freq for each strings, in the first index, so it won't print 
    // the same number if num = [A,B,B,A,B,A,A] fre = [4,3,0,0,0,0,0]
    // not freq = [4,3,3,4,3,4,4]
    for(string Ni : strings){
        freq[inputloc(Ni, strings)]++;
    }
    // need algorithm library * is needed
    int MaxinFreq = *max_element(freq.begin(), freq.end());

    cout << "Here's The mode of that set of strings : \n";
    for(int i = 0; i < freq.size(); i++){
        if(freq[i] == MaxinFreq){
            cout << strings[i] << ' '; 
            // break; if you only need one mode
        }
    }
    cout << "\nwith total of " << MaxinFreq << " elements\n";

    sort(strings.begin(), strings.end());
    cout << "The minimum value of that set of string is : ";
    if(strings.size() != 0) cout << strings[0] << '\n';
    cout << "The maximum value of that set of string is : ";
    if(strings.size() != 0) cout << strings[strings.size()-1] << '\n';
}