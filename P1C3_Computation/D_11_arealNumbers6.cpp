/*  Nama      : Muhammad Yoga Aminudin
 *  Tanggal   : Selasa, 29-Juli-2025
 *  Tempat    : Kudus, 10:41 UTC+7
 *  Deskripsi : Sebuah Program yang terus meminta sebuah bilangan real dan satuan panjang
                Kemudian menampilkan apakah bilangan tersebut bilangan terbesar atau terkecil
                sesuai satuannya, c/ input : 12m 12cm, 12cm is the smallest so far*/

// From D_9_arealNumbers.cpp
// Keep all the values entered (converted into meters) in a vector. At the end, 
// Before writing out the values from the vector, sort them (that’ll make them come out in
// increasing order).

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // for Range::sort
using namespace std;

// check if the unit if valid
bool isUnitValid(string unit){
    // a list of valid unit
    vector <string> valid = {"m","cm","in","ft"};
    // check is for all element in valid, unit is one of them
    bool isIN = false;
    for(string temp : valid){
        if(temp == unit){
            isIN = true;
            break;
        }
    }
    return isIN;
}

// a function to convert num in unit x to meter
double converttoMETER(double num, string unit){
    constexpr double CMtoM = 0.01;
    constexpr double INtoM = 0.0254;
    constexpr double FTtoM = 0.3048;
    // only convert if unit is valid
    if(isUnitValid(unit)){
        if(unit == "cm"){
            return num*CMtoM;
        } else if (unit == "ft"){
            return num*FTtoM;
        } else if(unit == "in"){
            return num*INtoM;
        } else return num;
    }
    else return 0;
}

int main(){
    cout << "=======================================================================\n";
    cout << "Please enter real numbers continuously with its unit\n"
         << "rn we can only recheive unit in m, in, ft, and cm, such as 12m or 12 cm\n"
         << "We will let you know it the number is the smallest or the biggest\n"
         << "of course 12m is bigger than 120cm !\n"
         << "If it's neither, we will also let you know.\n"
         << "If you're tired and want to stop, please type the character '|'.\n"
         << "START ENTERING NUMBERS BELOW (press Enter after each input):\n";
    // ---------------------------------------------------------------------------------
    double num = 0.0;
    string unit = "???";
    int INPUTvalid = 0, INPUTinvalid = 0;
    double sumINPUTvalid = 0.0;
    double min = 0.0, max = 0.0;
    double numconverted = 0.0;
    bool isFirstValid = false;
    vector <double> conVector;
    // ---------------------------------------------------------------------------------
    double numMax = 0.0, numMin = 0.0;
    string unitMax = "???", unitMin = "???";
    while(cin >> num >> unit){
        cout << "=======================================================\n";
        if(isUnitValid(unit)){
            INPUTvalid++;
            numconverted = converttoMETER(num, unit);
            sumINPUTvalid += numconverted;
            conVector.push_back(numconverted);
            if(!isFirstValid){
                isFirstValid = true;
                cout << num << unit << " is the smallest and the greatest so far\n";
                min = numconverted; max = numconverted;
                numMax = num, numMin = num, unitMax = unit, unitMin = unit;
            } else if( max < numconverted){
                max = numconverted;
                cout << num << unit << " is the biggest so far\n";
                numMax = num, unitMax = unit;
            } else if(numconverted < min){
                min = numconverted;
                cout << num << unit << " is the smallest so far\n";
                numMin = num, unitMin = unit;
            } else {
                cout << num << unit << " is neither the smallest or the biggest\n";
            }
        } else {
            INPUTinvalid++;
            cout << num << unit << " has invalid unit\n";
        } 
        cout << "ENTER AGAIN : (ctrl+z+enter to escape) : ";
    }

    // Summarize
    cout << "=======================================================================\n"
         << "The biggest value        :\t" << numMax << unitMax << '\n'
         << "The Smallest value       :\t" << numMin << unitMin << '\n'
         << "Total value Valid        :\t" << INPUTvalid << '\n'
         << "Total value inValid      :\t" << INPUTinvalid << '\n'
         << "sum of Total value valid :\t" << sumINPUTvalid << "m\n"
         << "Here's all of your valid value that you inputted (sorted by time) :\n";
    // range::sort(conVector); for C++20+ only
    // Or you could also write it as
    sort(conVector.begin(), conVector.end());
    for(int i=0; i< conVector.size(); i++){
        cout << conVector[i] << 'm' << '\t';
        if(i%4==0 && i!=0) cout << '\n';
    }
    return 0;
}