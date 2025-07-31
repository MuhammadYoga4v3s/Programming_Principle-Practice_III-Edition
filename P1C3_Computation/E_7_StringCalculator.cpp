/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Rabu, 30-Juli-2025
 *  Tempat    : Kudus, 10:18 UTC+7
 *  Deskripsi : program yang menghitung 2 angka 1-digit (baik di input dengan angka/string)
                dengan sebuah operasi +,/,*,- */

// Modify the ‘‘mini calculator’’ from E_5_SimpleCalculator to accept (just) single-digit numbers 
// written as either digits or spelled out.

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int strtoint(string num){
    vector<string> numstr = {"zero", "one", "two", "three", "four", "five", "six", 
                            "seven", "eight", "nine", "0", "1", "2", "3", "4", "5", 
                            "6", "7", "8", "9"};
    int search = 0;
    for(string temp : numstr){
        if(temp == num){
            if(search > 9){
                search %= 10;
            }
            return search;
        }
        search++;
    }
    // not found (in for loop)
    return -1;
}

int main(){
    cout << "============ WELCOME TO OUR CALCULATOR =============\n";
    char respon = 'y';
    string num1 = "0", num2 = "0";
    int num1int = 0, num2int = 0;
    char op = '?';
    while(respon == 'y'){
        cout << "Please enter 2 real value or you could write it"
             << "\nas 2 string (all lowercase): ";
        cin >> num1 >> num2;
        num1int = strtoint(num1), num2int = strtoint(num2);
        cout << "Now enter the operation (ONLY +,-,*,/) : ";
        cin >> op;

        // -----------------------------------------------------------------
        if(num1int != -1 && num2int != -1){
            if(op == '+') cout << "The sum of " << num1int << " and "
                            << num2int << " is " << num1int + num2int << '\n';
            else if(op == '-') cout << "The difference of " << num1int << " and "
                                    << num2int << " is " << num1int - num2int << '\n';
            else if(op == '*') cout << "The product of " << num1int << " and "
                                    << num2int << " is " << num1int * num2int << '\n';
            else if(op == '/'){
                if(num2int == 0){
                    cout << "You can't divide something with 0\n";
                } else {
                    double result = (double)num1int / num2int;
                    cout << "The ratio of " << num1int << " and "
                         << num2int << " is " << result << '\n';
                }
            }
            else cout << "Operation doesn't exist\n";
        } else {
            cout << "atleast One of " << num1 << " and " << num2 
                 << " is unrecognizable\n";
        }

        cout << "do you want to calculate again ? (y/n) : ";
        cin >> respon;
        cout << "-----------------------------------------------------\n";
    }
    cout << "=================== THANK YOU ^^ ====================\n";
    return 0;
}