/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Rabu, 30-Juli-2025
 *  Tempat    : Kudus, 7:50 UTC+7
 *  Deskripsi : progran yang meminta dua buah bilangan real dan sebuah operator dan meng
                kalkulasinya*/

// Write a program that performs as a very simple calculator. Your calculator should be able to
// handle the four basic math operations – add, subtract, multiply, and divide – on two input val
// ues. Your program should prompt the user to enter three arguments: two double values and a
// character to represent an operation. If the entry arguments are 35.6, 24.1, and '+', the program
// output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 5 and Chapter 6, we look at a
// much more sophisticated simple calculator.

#include <iostream>
using namespace std;

int main(){
    cout << "============ WELCOME TO OUR CALCULATOR =============\n";
    char respon = 'y';
    double num1 = 0,num2 = 0;
    char op = '?';
    while(respon == 'y'){
        cout << "Please enter 2 real value              : ";
        cin >> num1 >> num2;
        cout << "Now enter the operation (ONLY +,-,*,/) : ";
        cin >> op;
        // -----------------------------------------------------------------
        if(op == '+') cout << "The sum of " << num1 << " and "
                           << num2 << " is " << num1 + num2 << '\n';
        else if(op == '-') cout << "The difference of " << num1 << " and "
                                << num2 << " is " << num1 - num2 << '\n';
        else if(op == '*') cout << "The product of " << num1 << " and "
                                << num2 << " is " << num1 * num2 << '\n';
        else if(op == '/'){
            if(num2 == 0){
                cout << "You can't devide something with 0\n";
            } else cout << "The ratio of " << num1 << " and "
                        << num2 << " is " << (double)num1 / num2 << '\n';
        }
        else cout << "Operation doesn't exist\n";

        cout << "do you want to calculate again ? (y/n) : ";
        cin >> respon;
        cout << "-----------------------------------------------------\n";
    }
    cout << "=================== THANK YOU ^^ ====================\n";
    return 0;
}