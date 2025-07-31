/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 28-Juli-2025
 *  Tempat    : Kudus, 16:16 UTC+7
 *  Deskripsi : program yang akan menebak angka yang user pikirkan dalam 7 kali iterasi*/

// Write a program to play a numbers guessing game. The user thinks of a number between 1
// and 100 and your program asks questions to figure out what the number is (e.g., ‘‘Is the 
// number you are thinking of less than 50?’’). Your program should be able to identify the 
// number after asking no more than seven questions.

#include <iostream>
using namespace std;

int main(){
    cout << "Think of a number between 1 and 100\n"
         << "We will try to guess those number in 7 guesses:)\n"
         << "Answer each question with yes or no in y/n\n";
    // This implements a Binary Search to find a value in a sorted list.
    // The algorithm works by repeatedly checking the middle element and
    // eliminating half of the remaining search space in each step.
    int left = 1, right = 100;
    int middle = (left+right)/2;
    char answer = '?';
    // int i= 0;
    // ----------------------------------------------------------------------------------------
    while(right >= left){
        // i++;
        // cout << "left : " << left << " right : " << right << " iteration : " << i << '\n' ;
        cout << "is your number less than " << middle << "? y/n\n";
        cin >> answer;
        // If n: The number must be greater than middle, so the new range is [middle + 1, right]
        if(answer == 'n'){
            left = middle + 1;
        // if y: The number couldn't be middle, so the new range is [left, middle-1]
        } else if(answer == 'y'){
            right = middle -1 ;
        } else cout << "Please, the answer should be only y/n!!\n";
        middle = (left+right)/2;
    }
    cout << "Your number is " << middle << ", GOTCHA!\n";
}