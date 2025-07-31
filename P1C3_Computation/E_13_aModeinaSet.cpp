/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Kamis, 31-Juli-2025
 *  Tempat    : Kudus, 01:21 UTC+7
 *  Deskripsi : program yang meminta input terus menerus dan menampilkan modus dari
                seluruh masukan yang diberikan*/

// In the drill, you wrote a program that, given a series of numbers, found the max and min of
//  that series. The number that appears the most times in a sequence is called the mode. Create
//  a program that finds the mode of a set of positive integers.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Program idea, create a new vector called freq which count freq[numbers[i]]
int inputloc(int N, vector<int> num){
    int found = 0;
    for(int temp : num){
        if(temp == N){
            break;
        } found++;
    }
    return found;
}

int main(){
    cout << "input a set of integer, when you done write '\' and enter\n"
         << "we will tell you the mode of that set of integer :)\n"
         << "enter here : ";
    int N = 0;
    vector<int> numbers;
    int elmt = 0;

    while(cin >> N){
        numbers.push_back(N);
    }
    // Done inputing
    vector<int> freq(numbers.size(),0);
    // count a freq for each numbers, in the first index, so it won't print 
    // the same number if num = [4,4,4,4,4,4,4] fre = [7,0,0,0,0,0,0]
    // not freq = [7,7,7,7,7,7,7]
    for(int Ni : numbers){
        freq[inputloc(Ni, numbers)]++;
    }
    // need algorithm library * is needed
    int MaxinFreq = *max_element(freq.begin(), freq.end());

    cout << "Here's The mode of that set of integer : \n";
    for(int i = 0; i < freq.size(); i++){
        if(freq[i] == MaxinFreq){
            cout << numbers[i] << ' '; 
            // break; if you only need one mode
        }
    }
    cout << "\nwith total of " << MaxinFreq << " elements\n";
}