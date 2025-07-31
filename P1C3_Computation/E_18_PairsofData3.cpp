/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Kamis, 31-Juli-2025
 *  Tempat    : Kudus, 16:09 UTC+7
 *  Deskripsi : program yang meminta sebuah pasangan nama dan nilai terus menerus, memastikan
                nama unik, dan menampilkan semua nama yang memiliki nilai yang diinputkan */

// Modify the program from the previous exercise so that once you have entered the name-and
// value pairs, you ask for names: In a loop, when you enter a value, the program will output all
//  the names with that score or score not found.

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
    vector<string> namesscore;
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
    int Nsearch = 0;
    int count = 0;
    // ------------------------------------------------------------------------
    cout << "Do You Wanna see who got a certain score? (y/n) : ";
    cin >> respond;
    while(respond == 'y'){
        cout << "Enter a number \t\t\t: ";
        cin >> Nsearch;
        // SEARCH ALL INPUT IN SCORES, IF THE SAME, SAVE THEM TO NEW VECTOR
        for(int i= 0; i < scores.size(); i++){
            if(scores[i] == Nsearch){
                namesscore.push_back(names[i]);
                count++;
            }
        } if(count == 0) {
            cout << "Score not Found\n";
        } else {
            // GRAMMAR PROBLEM
            if(count > 1){
                for(int j = 0; j < namesscore.size()-1 ; j++){
                    cout << namesscore[j] << ", "; 
                } cout << "and " << namesscore[namesscore.size()-1]
                       << " have " << Nsearch << " scores\n";
            } else{
                cout << namesscore[0]
                     << " has " << Nsearch << " scores\n";
            }
        }
        cout << "Wanna see who got a certain score again? (y/n) \t: ";
        cin >> respond;
        // RESET THE DATA AND THE COUNT
        namesscore.clear();
        count = 0;
        cout << "-----------------------------------------------------------\n";
    }
    cout << "----------------------- THANK YOU -------------------------\n";
}