/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Minggu, 21-Juli-2025
*   Tempat    : Kudus, 17:29 UTC+7
*   Deskripsi : Membenahi Program yang Error */

// these program will send you an error massege, try to compile it
// solve one error, compile it, and solve one, compile it, until you got 0 error

// Block this program and click ctrl + /
// import std;
// int Main(){
//     STRING s = "Goodbye , cruel world! ";
//     cOut << S << '\n';
// }

/* 5 ERROR
    1. 'import' does not name a type
    2. 'STRING' was not declared in this scope
    3. 'cOut' was not declared in this scope
    4. 'S' was not declared in this scope
    5. no return statement in function returning non-void [-Wreturn-type] */

// SOLVED 
#include <iostream>   // typical
using namespace std;

int main(){  // main not Main, case sensitive
    string s = "Goodbye , cruel world! "; // string not STRING
    cout << s << '\n';                    // cout not cOut. AND be consistent, S or s, decide!
    // int Main : compiler will read it as a subprogram named Main, which need a return value int
}