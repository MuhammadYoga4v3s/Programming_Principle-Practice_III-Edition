/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 05:09 UTC+7
 *  Deskripsi : Sebuah Program yang terus meminta sebuah bilangan real dan satuan panjang
                Kemudian menampilkan apakah bilangan tersebut bilangan terbesar atau terkecil
                sesuai satuannya, c/ input : 12m 12cm, 12cm is the smallest so far*/

// Add a unit to each double entered; that is, enter values such as 10cm, 2.5in, 5ft,or3.33m.
//  Accept the four units: cm, m, in, ft. Assume conversion factors 1m==100cm, 1in==2.54cm,
//  1ft==12in. Read the unit indicator into a string. You may consider 12 m (with a space
//  between the number and the unit) equivalent to 12m (without a space).

#include <iostream>
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
    cin >> num >> unit;
    numconverted = convertToCM(num, unit);
    double min = numconverted, max = numconverted;
    cout << "=======================================================\n"
         << num << unit << " is the smallest and the greatest so far\n";
    // ---------------------------------------------------------------------------------
    while(cin >> num >> unit){
        numconverted = convertToCM(num, unit);
        cout << "=======================================================\n";
        if(numconverted > max){
            max = numconverted;
            cout << num << unit << " is the biggest so far\n";
        } else if(numconverted < min){
            min = numconverted;
            cout << num << unit << " is the smallest so far\n";
        } else {
            cout << num << unit << " is neither the smallest or the biggest\n";
        }
    }
}