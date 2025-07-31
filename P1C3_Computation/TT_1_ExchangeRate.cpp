/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Senin, 28-Juli-2025
 *  Tempat    : Kudus, 14:36 UTC+7
 *  Deskripsi : Sebuah Program Konversi mata uang dalam yen, kroner, dan point ke dollar */

// Use the example above as a model for a program that converts yen ('y'), kroner ('k'),
// and pounds ('p') into dollars. If you prefer realism, you can find conversion rates on
// the web.

// JPY to USD = 0.00676397 - USD to JPY = 147.842083
// DKK to USD = 0.157016 - USD to DKK = 6.36876
// GBP to USD = 1.3424685 - USD to GBP = 0.744896

#include <iostream>
using namespace std;

int main(){
    // DO NOT FORGET THE TYPE AFTER CONSTEXPR
    constexpr double JPYtoUSD = 0.00676397;
    constexpr double DKKtoUSD = 0.157016;
    constexpr double GBPtoUSD = 1.3424685;
    //----------------------------------------------------------------------
    cout << "We will try to convert all of your money into USD\n"
         << "How much money do you have? : ";
    double amount = 0.0;
    cin >> amount;
    
    cout << "What is the currency of this money? : ";
    char currency = '#';
    cin >> currency;

    double usdAmount = 0.0;
    //----------------------------------------------------------------------
    if(currency == 'y'){
        usdAmount = amount * JPYtoUSD;
        cout << "From then, you have: " << amount << " yen\n";
        cout << "Now, you have: " << usdAmount;
        if(usdAmount == 1) cout << " dollar\n";
        else cout << " dollars\n";
    } else if(currency == 'k'){
        usdAmount = amount * DKKtoUSD;
        cout << "From then, you have: " << amount << " kroner\n";
        cout << "Now, you have: " << usdAmount;
        if(usdAmount == 1) cout << " dollar\n";
        else cout << " dollars\n";
    } else if(currency == 'p'){
        usdAmount = amount * GBPtoUSD;
        cout << "From then, you have: " << amount;
        // Grammar - yen and kroner dont have plural, Weird
        if(amount == 1) cout << " pound\n";
        else cout << " pounds\n";
        cout << "Now, you have: " << usdAmount;
        if(usdAmount == 1) cout << " dollar\n";
        else cout << " dollars\n";
    } else{
        cout << "Sorry, we don't know the currency of your money yet\n";
    }

    return 0;
}