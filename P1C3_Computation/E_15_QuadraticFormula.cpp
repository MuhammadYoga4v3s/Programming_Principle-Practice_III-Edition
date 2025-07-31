/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Kamis, 31-Juli-2025
 *  Tempat    : Kudus, 12:28 UTC+7
 *  Deskripsi : program yang meminta nilai a, b, c dari ax2 + bx + c = 0 dan menemukan
                solusi x1 dan x2*/

// Write a program to solve quadratic equations. A quadratic equation is of the form
//  ax2 + bx + c = 0. If you don’t know the formula for solving such an expression, do some
//  research. Remember, researching how to solve a problem is often necessary before a pro
// grammer can teach the computer how to solve it. Use doubles for the user inputs for a, b, and
//  c. Since there are two solutions to a quadratic equation, output both x1 and x2.

// THE REAL PROBLEM : NOT ALL SOLUTION IS REAL
#include <iostream>
#include <cmath>
#include <complex> 
// complex<int> D; D = (x,y) which means x + yi, i = sqrt(-1)
// D.imag() = y, D.real() = x
using namespace std;

// Find Discriminant
complex<double> discriminant(double a, double b, double c){
    return b*b - 4*a*c;
}

int main(){
    cout << "a quardatic formula is ax^2 + bx + c = 0\n"
         << "input a, b, and c, we will find the x1 and x2 solution\n"
         << "input here all of the three number : ";
    double a = 0.0 ,b = 0.0 ,c = 0.0;

    cin >> a >> b >> c;
    // x1 = (-b + sqrt(D))/2a , x2 = (-b - sqrt(D))/2a
    complex<double> D = discriminant(a,b,c);
    complex<double> x1 = (-b + sqrt(D))/(2.0*a); // 2.0
    complex<double> x2 = (-b - sqrt(D))/(2.0*a); // 2.0

    cout << "The solution of " << a << "x^2 + " << b << "x + "
         << c << " = 0 are\n"
         << "x1 = " << x1.real();
    if(x1.imag() != 0) 
        cout << (x1.imag() > 0 ? " + " : " - ") << abs(x1.imag()) << "i\n";
    else 
        cout << '\n';
    cout << "x2 = " << x2.real();
    if(x2.imag() != 0) 
        cout << (x2.imag() > 0 ? " + " : " - ") << abs(x2.imag()) << "i\n";
    else 
        cout << '\n';
}