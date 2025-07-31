/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 05:09 UTC+7
 *  Deskripsi : Sebuah Program yang terus meminta sebuah bilangan real dan satuan panjang
                Kemudian menampilkan apakah bilangan tersebut bilangan terbesar atau terkecil
                sesuai satuannya, c/ input : 12m 12cm, 12cm is the smallest so far*/

// from D_7_arealNumbers2
// Reject values without units or with ‘‘illegal’’ representations of units, such as y, yard,
// meter, km, and gallons.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// a function to convert the number unit to cm unit
double convertToCM(double num, string unit){
    constexpr double MtoCM = 100.0;
    constexpr double INtoCM = 2.54;
    constexpr double FTtoCM = 12*INtoCM;

    double numconverted = 0.0;
    if(unit == "m") numconverted = num*MtoCM;
    else if(unit == "in") numconverted = num*INtoCM;
    else if(unit == "ft") numconverted = FTtoCM*num;
    else numconverted = num;

    return numconverted;
}

// a function to check if the unit is rejected or not
bool isaccept(string unit){
    vector <string> units = {"m", "cm", "in", "ft"};

    // check is unit is among the units
    bool isIN = false;
    for(string temp : units){
        if(temp == unit){
            isIN = true;
            break;
        }
    }

    return isIN;
}

int main(){
    cout << "Please enter real numbers continuously with its unit\n"
         << "rn we can only recheive unit in m, in, ft, and cm, such as 12m or 12 cm\n"
         << "We will let you know it the number is the smallest or the biggest\n"
         << "of course 12m is bigger than 120cm !\n"
         << "If it's neither, we will also let you know.\n"
         << "If you're tired and want to stop, please type the character '|'.\n"
         << "START ENTERING NUMBERS BELOW (press Enter after each input):\n";
    // ---------------------------------------------------------------------------------
    double num = 0.0, numconverted = 0.0;
    string unit = "???";
    double min = 0.0, max = 0.0;
    // ---------------------------------------------------------------------------------
    bool isFirstValid = false;
    while(cin >> num >> unit){
        cout << "=======================================================\n";
        if(isaccept(unit)){
            numconverted = convertToCM(num, unit);
            if(!isFirstValid){
                isFirstValid = true;
                cout << num << unit << " is the smallest and the greatest so far\n";
                min = numconverted; max = numconverted;
            } else if(numconverted > max){
                max = numconverted;
                cout << num << unit << " is the biggest so far\n";
            } else if(numconverted < min){
                min = numconverted;
                cout << num << unit << " is the smallest so far\n";
            } else {
                cout << num << unit << " is neither the smallest or the biggest\n";
            }
        } else {
            cout << num << unit << " has invalid unit\n";
        }
        cout << "ENTER AGAIN : (ctrl+z+enter to escape) : ";
    }
}