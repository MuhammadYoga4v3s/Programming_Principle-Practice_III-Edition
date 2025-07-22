/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 12:34 UTC+7
*   Deskripsi : READ THE README BELLOW */

/*Write a program that prompts the user to enter some number of pennies (1-cent coins), nick
els (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), half dollars (50-cent
coins), and one-dollar coins (100-cent coins). Query the user separately for the number of
each size coin, e.g., ‘‘How many pennies do you have?’’ Then your program should print out
something like this:
    You have 23 pennies.
    You have 17 nickels.
    You have 14 dimes.
    You have 7 quar ters.
    You have 3 half dollars.
    The value of all of your coins is 573 cents.
if only one of a coin is reported, make the output grammatically
correct, e.g., 14 dimes and 1 dime (not 1 dimes). Also, report the sum in dollars and cents,
i.e., .73 instead of 573 cents.*/

#include <iostream>
using namespace std;

int main(){
    cout << "In Here, we'll ask you how many money do you have !\n"
         << "We will ask various kind of money to you\n"
         << "And we will trying to convert all your money into dollars\n"
         << "Remember that you can't have negative of Decimal in some case\n"
         << "============================= BEGIN ============================\n\n";
    int penny = 0, nickel = 0, dime = 0, quarter = 0, halfdollar = 0, dollarcoin = 0;
    cout << "How many pennies do you have ? : ";
    cin >> penny;
    cout << "How many nickels do you have ? : ";
    cin >> nickel;
    cout << "How many dimes do you have ? : ";
    cin >> dime;
    cout << "How many quar ters do you have ? : ";
    cin >> quarter;
    cout << "How many half dollars do you have ? : ";
    cin >> halfdollar;
    cout << "How many one dollar coins do you have ? : ";
    cin >> dollarcoin;

    cout << "\n============================= DONE ============================";
    if(penny <= 1){
        cout << "\n\tYou Have " << penny << " Penny";
    } else{
        cout << "\n\tYou Have " << penny << " Pennies";
    } if(nickel <= 1){
        cout << "\n\tYou Have " << nickel << " Nickel";
    } else{
        cout << "\n\tYou Have " << nickel << " Nickels";
    } if(dime <= 1){
        cout << "\n\tYou Have " << dime << " Dime";
    } else{
        cout << "\n\tYou Have " << dime << " Dimes";
    } if(quarter <= 1){
        cout << "\n\tYou Have " << quarter << " quarter";
    } else{
        cout << "\n\tYou Have " << quarter << " quarters";
    } if(halfdollar <= 1){
        cout << "\n\tYou Have " << halfdollar << " Half Dollar";
    } else{
        cout << "\n\tYou Have " << halfdollar << " Half Dollars";
    } if(dollarcoin <= 1){
        cout << "\n\tYou Have " << dollarcoin << " Dollar Coin";
    } else{
        cout << "\n\tYou Have " << dollarcoin << " Dollar Coins";
    }

    int sumCoin = penny + nickel*5 + dime*10 + quarter*25 
                  + halfdollar*50 + 100*dollarcoin;
    cout << "\n\tThe value of all of your coins is " << sumCoin << " cents"
         << "\n\tOr " << sumCoin/100 << " Dollars " << sumCoin%100
         << " Coins";
}