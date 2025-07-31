/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Rabu, 30-Juli-2025
 *  Tempat    : Kudus, 16:58 UTC+7
 *  Deskripsi : Program ini akan memainkan batu guntin kertas kepada user dengan kemungkinan
                Program memilih random antara batu/gunting/kertas */

/*Write a program that plays the game ‘‘Rock, Paper, Scissors.’’ If you are not familiar with
 the game do some research (e.g., on the Web using Google). Research is a common task for
 programmers. Use a switch-statement to solve this exercise. Also, the machine should give
 random answers (i.e., select the next rock, paper, or scissors randomly). Real randomness is
 too hard to provide just now, so just build a vector with a sequence of values to be used as
 ‘‘the next value.’’ If you build the vector into the program, it will always play the same game,
 so maybe you should let the user enter some values. Try variations to make it less easy for
 the user to guess which move the machine will make next.*/

#include <iostream>
#include <cstdlib> // for rand() function
#include <ctime>   // for the seed time srand, to minimize rand() to get the same value
#include <vector>
#include <string>
using namespace std;

int main(){
    srand(time(0));  // seed random generator
    vector<string> janken = {"rock", "paper", "scissors"};
    string choose = "???";
    int machoose = 0;

    cout << "============ WELLCOME to Janken OLYMPIAD ============\n";
    char answer = 'y';
    while(answer == 'y'){
        cout << "Please write your move (rock/paper/scissor) : ";
        cin >> choose;
        machoose = rand()%3; // mod 3 cause there is only 3 move
        // machoose for machine choose ^^
        if(choose == "rock"){
            if(janken[machoose] == "paper"){
                cout << "the machine choose " << janken[machoose] 
                     << "\nand " << janken[machoose] << " is win against " << choose
                     << "\nYou lose sorry :[\n";
            } else if(janken[machoose] == "scissors"){
                cout << "the machine choose " << janken[machoose] 
                     << "\nand " << janken[machoose] << " is lose against " << choose
                     << "\nYou win congrats !\n";
            } else {
                cout << "the machine choose : " << janken[machoose] 
                     << "\nand you choose : " << choose
                     << "\nit is a TIE!\n"; }
        } else if(choose == "paper"){
            if(janken[machoose] == "scissors"){
                cout << "the machine choose " << janken[machoose] 
                     << "\nand " << janken[machoose] << " is win against " << choose
                     << "\nYou lose sorry :[\n";
            } else if(janken[machoose] == "rock"){
                cout << "the machine choose " << janken[machoose] 
                     << "\nand " << janken[machoose] << " is lose against " << choose
                     << "\nYou win congrats !\n";
            } else {
                cout << "the machine choose : " << janken[machoose] 
                     << "\nand you choose : " << choose
                     << "\nit is a TIE!\n"; }
        } else if(choose == "scissors"){
            if(janken[machoose] == "rock"){
                cout << "the machine choose " << janken[machoose] 
                     << "\nand " << janken[machoose] << " is win against " << choose
                     << "\nYou lose sorry :[\n";
            } else if(janken[machoose] == "paper"){
                cout << "the machine choose " << janken[machoose] 
                     << "\nand " << janken[machoose] << " is lose against " << choose
                     << "\nYou win congrats !\n";
            } else {
                cout << "the machine choose : " << janken[machoose] 
                     << "\nand you choose : " << choose
                     << "\nit is a TIE!\n"; }
        } else {
            cout << "please only choose rock/paper/scissors in lowercase\n";
        }
        cout << "Do you want to Play again ? (y/n) : ";
        cin >> answer;
        cout << "-----------------------------------------------------\n";
    }
    cout << "======== I'LL ALWAYS BE THERE FOR CHALLENGES ========\n";
}

