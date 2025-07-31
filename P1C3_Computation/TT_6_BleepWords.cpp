/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Senin, 28-Juli-2025
 *  Tempat    : Kudus, 21:46 UTC+7
 *  Deskripsi : Sebuah program yang menulis ulang kata yang kita masukkan dan melakukan
                sensor untuk kata yang tidak kita sukai */

// Write a program that ‘‘bleeps’’ out words that you don’t like; that is, you read in
// words using cin and print them again on cout. If a word is among a few you have
// defined, you write out BLEEP instead of that word. Start with one ‘‘disliked word’’
//  such as
//  string disliked = "Broccoli";
// When that works, add a few more.

#include <iostream>
#include <vector>   // a Must if we use vector in our program
#include <string>
using namespace std;

int main(){
    cout << "Please enter as many words as you like! \n"
         << "If you done, please click DONE+enter\n"
         << "START ENTER HERE : ";
    vector<string> words;
    // define temp, and read temp until temp is invalid (ctrl+Z)
    for(string temp; cin >> temp && temp != "DONE";){
        words.push_back(temp);
    }

    vector<string> disliked = {"Broccoli", "Cow", "Dogfood", "Lie"};
    cout << "We filtered all of your words, each word that we disliked"
         << " Has changed into a cencored word 'bleep'\n"
         << "Here's all your words again! : \n";
    for(string word : words){
        // a variable to see if your words is safe from dislike
        // if isReachEnd = disliked.disliked then it was not stopped and no words is disliked
        bool isfound = false;
        for(string i : disliked){
            if(word == i){
                cout << "Bleep\n";
                isfound = true;
                break;
                // Found one word, EXIT, so the Bleep won't print twice or more
            }
        }
        if(!isfound) cout << word << '\n';
    }
}