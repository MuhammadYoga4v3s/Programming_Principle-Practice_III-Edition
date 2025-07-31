/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Kamis, 31-Juli-2025
 *  Tempat    : Kudus, 15:53 UTC+7
 *  Deskripsi : program yang meminta sebuah pasangan nama dan nilai terus menerus, memastikan
                nama unik, dan menampilkan satu nilai yang dimiliki oleh nama yang diinputkan */

// Modify the program from the previous exercise so that once you have entered the name-and
// value pairs, you ask for values: In a loop, when you enter a name, the program will output the
//  corresponding score or name not found.

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
    cout << "-----------------------------------------------------------\n"
         << "Thanks for inputing the data!\n";
    char respond = 'y';
    string Nsearch = "???";
    int i = 0;
    // ------------------------------------------------------------------------
    cout << "Do you want to see someone's score ?(y/n) \t: ";
    cin >> respond;
    while(respond == 'y'){
        cout << "Enter the name to search for their score \t: ";
        cin >> Nsearch;
        for(i = 0; i < names.size(); i++){
            if(names[i] == Nsearch){
                cout << Nsearch << " has a score of " << scores[i] << '\n';
            }
        } if(i == names.size()){
            cout << "Name not found\n";
        }
        cout << "Do you want to see someone's score again ?(y/n) \t: ";
        cin >> respond;
        cout << "-----------------------------------------------------------\n";
    }
    cout << "----------------------- THANK YOU -------------------------\n";
}