/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 12:19 UTC+7
*   Deskripsi : Sebuah program yang meminta input 1 buat operator dan 2 buah angka
                lalu output hasilnya */

// Write a program that takes an operation followed by two operands and outputs the result. For
// example: + 100 3.14 OR ∗ 45 50 
// Read the operation into a string called operation and use an if-statement to figure out which
// operation the user wants, for example, if (operation=="+"). Read the operands into variables
// of type double. Implement this for operations called +, −, ∗, /, plus, minus, mul, and div with
// their obvious meanings.

#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter an arithmethic operation such as +, -, /, OR *\n"
         << "Your could also write it in string such as plus, minus, mul, and div\n"
         << "the Operation must be all lower case!\n"
         << "ENTER THE OPERATION HERE : \n";
    string op;
    cin >> op;
    cout << "Now enter two number named A and B, you could write it in floating-point\n"
         << "We would print the result or A operation B\n"
         << "ENTER YOUR TWO NUMBER HERE : \n";
    double A, B;
    cin >> A >> B;
    // ====================================== BEGIN ======================================
    if(op == "+" || op == "plus"){
        cout << "The result of "  << A << " + " << B << " = " << A+B;
    } else if(op == "-" || op == "minus"){
        cout << "The result of "  << A << " - " << B << " = " << A-B;
    } else if(op == "*" || op == "mul"){
        cout << "The result of "  << A << " * " << B << " = " << A*B;
    } else if(op == "/" || op == "div"){
        cout << "The result of "  << A << " / " << B << " = " << A/B;
    } else{
        cout << "Sorry your operation is unkown for us";
    }
}