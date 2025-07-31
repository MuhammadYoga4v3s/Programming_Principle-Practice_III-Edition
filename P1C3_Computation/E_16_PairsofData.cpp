/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Kamis, 31-Juli-2025
 *  Tempat    : Kudus, 15:33 UTC+7
 *  Deskripsi : program yang meminta sebuah pasangan nama dan nilai terus menerus, memastikan
                nama unik, dan menampilkan semua pasnagan baris per baris*/

// Write a program where you first enter a set of name-and-value pairs, such as Joe 17 and Bar
// bara 22. For each pair, add the name to a vector called names and the number to a vector
//  called scores (in corresponding positions, so that if names[7]=="Joe" then scores[7]==17).
//  Terminate input with NoName 0. Check that each name is unique and terminate with an error
//  message if a name is entered twice. Write out all the (name,score) pairs, one per line.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// a function to check if name is aready in names or not
bool isexisted(string name, vector<string> names){
    bool exist = false;
    for(string temp : names){
        if(temp == name){
            exist = true;
            break;
        }
    }
    return exist;
}

int main(){
    vector<string> names;
    vector<int> scores;
    cout << "Please enter a set data of pairs of Names and their scores of the exam test\n"
         << "if you done just write {'NoName', 0} \n"
         << "Start input here : \n";
    string name = "???";
    int score = 0;

    while(cin >> name && cin >> score){
        if(name != "NoName" || score != 0){
            if(!isexisted(name,names)){
                names.push_back(name);
                scores.push_back(score);
            } else {
                cout << name << " is already existed, try something else\n";
            }
        } else break;
    }
    cout << "---------------------------------------------------\n"
         << "All of The valid pairs you've inputed so far are : \n";
    for(int i = 0; i < names.size(); i++){
        cout << names[i] << ' ' << scores[i] << '\n';
    }
}