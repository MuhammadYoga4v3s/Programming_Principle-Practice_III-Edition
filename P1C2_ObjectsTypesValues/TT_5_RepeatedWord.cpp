/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Minggu, 21-Juli-2025
*   Tempat    : Kudus, 17:11 UTC+7
*   Deskripsi : Sebuah program yang terus meminta input string dan mengecek apakah input sekarang
                sama dengan input sebelumnya */

// these program will request a string over and over again, and compare the
// current string to the previous one, if same it will output a warning

#include <iostream>
#include <string>     // for string library
using namespace std;

int main() {
    string previous;
    string current;
    while(cin >> current){      // while the user input current (until whitespace)
        if(current == previous) // No need to write {} if it's a single condition
            cout << "repeated word:" << current << "\n";
        // out of if
        previous = current;
        cout << "Your word isn't repeated with the previous word you input\n"
             << "Click crtl + Z + enter if you wanna end this program\n";
    }
}

/* Try to input this : 
"She she laughed "he he he!" because what he did did not look very ver y good good."
this is how the program will work
iteration 1
current = "She, previous = [default string value]
output : Your word ....
iteration 2
current = she , previous = "She, computer take your text litterally as a word, be careful
output : Your word ....
iteration 3
current = "laughed, previous = she
output : Your word ....
... Try to Tracing it your self 
*/ 
// Repeated Word meaning that current and previous has the same letter and at the exact same position
// such as Alakazam and Alakazam, not as alakazam and Alakazam or "She and she