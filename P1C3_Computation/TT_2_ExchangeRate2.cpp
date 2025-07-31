/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Senin, 28-Juli-2025
 *  Tempat    : Kudus, 16:49 UTC+7
 *  Deskripsi : Sebuah Program Konversi mata uang dalam yen, kroner, dan pound
                dan franc ke dollar */

// Rewrite your currency converter program from the previous TRYTHIS to use a
// switch-statement. Add a conversion from Swiss francs.
// Which version of the program is easier to write, understand, and modify? Why?

// JPY to USD = 0.00676397 - USD to JPY = 147.842083
// DKK to USD = 0.157016 - USD to DKK = 6.36876
// GBP to USD = 1.3424685 - USD to GBP = 0.744896
// CHF to USD = 1.2500419 - USD to CHF = 0.799973

#include <iostream>
using namespace std;

int main(){
    // DO NOT FORGET TO INCLUDE THE TYPE AFTER CONSTEXPR
    constexpr double JPYtoUSD = 0.00676397;
    constexpr double DKKtoUSD = 0.157016;
    constexpr double GBPtoUSD = 1.3424685;
    constexpr double CHFtoUSD = 1.2500419;
    // ---------------------------------------------------------------------
    cout << "We will try to convert all of your money into USD\n"
         << "How much money do you have? : ";
    int amount = 0;
    cin >> amount;
    
    cout << "What is the currency of this money? : ";
    char currency = '#';
    cin >> currency;

    double usdAmount = 0.0;
    // ----------------------------------------------------------------------
    switch(currency){
        case 'y':
            usdAmount = amount * JPYtoUSD;
            cout << "Previously, you had " << amount << " yen\n";
            cout << "Now, you have " << usdAmount;
            if(usdAmount == 1) cout << " dollar\n";
            else cout << " dollars\n";
            break;
        case 'k':
            usdAmount = amount * DKKtoUSD;
            cout << "Previously, you had " << amount << " kroner\n";
            cout << "Now, you have " << usdAmount;
            if(usdAmount == 1) cout << " dollar\n";
            else cout << " dollars\n";
            break;
        case 'f':
            usdAmount = amount * CHFtoUSD;
            cout << "Previously, you had " << amount << " franc";
            if(amount != 1) cout << "s"; // SMART
            cout << "\nNow, you have " << usdAmount;
            if(usdAmount == 1) cout << " dollar\n";
            else cout << " dollars\n";
            break;
        case 'p':
            usdAmount = amount * GBPtoUSD;
            cout << "Previously, you had " << amount;
            if(amount == 1) cout << " pound\n";
            else cout << " pounds\n";
            cout << "Now, you have " << usdAmount;
            if(usdAmount == 1) cout << " dollar\n";
            else cout << " dollars\n";
            break;
        default:
            cout << "Sorry, we don't recognize that currency yet\n";
            break;
    }
    return 0;
}

/*
For me, the if-statement version is easier to understand because of its clearer structure.
The block scopes make the program more readable. In switch-statements, you need to understand
that case 'y' means "if currency == 'y'", which might be less obvious for beginners.

As for which version is easier to write or modify, I would say the if-statement is also easier
to write — because sometimes (especially for beginners), it's easy to forget the 'break;' rule.
At least for me, it just happened and I'm confused right now — haha!

However, both versions are equally easy to modify. It's just unfortunate that switch-statements
do not support floating-point values or strings like if-statements do.
*/
