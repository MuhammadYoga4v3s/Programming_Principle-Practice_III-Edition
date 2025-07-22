/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Senin, 22-Juli-2025
*   Tempat    : Kudus, 03:57 UTC+7
*   Deskripsi : Sebuah program interaktif dalam terminal yang menanya dan menampilkan sebuah
                hasil berupa 'surat' */

// this program will request a name and some of your fictional data
// this program will make you a letter based on the input you give him

#include <iostream>
#include <string>    // C++ didnt understand string yet, it's a list of chars
using namespace std; // this is needed, so you wouldnt need to write std:: over and over again

int main() {
    // 1. Begin by typing the code from §2.1 prompting a user to enter 
    // his or her first name and writing
    cout << "Enter the name of the person you want to write to : \n";
    string name = "???";
    cin >> name;
    cout << "=======================================================================\n";
    cout << "Dear, " << name <<", \n";  // Don't Forget the comma

    // 2. Add an introductory line or two, Be sure toindent the first line. 
    // Add a few more lines of your choosing – it’s your letter.
    // if \n is for newline \t is for tab
    cout << "\t\tHow are you ?, it feels like ages since we properly connected\n"
         << "\ti've been thinking about you lately and wanted to reach out. Life has\n"
         << "\tinteresting with this book you gave me\n";

    // 3. prompt the user for the name of another friend and store it in friend_name.
    cout << "\n\tplease friend, enter a name of our other friend : \n\t";
    cin >> name;
    cout << "\t\t Have you see " << name << " Lately?";

    // 4. Prompt the user to enter the age of the recipient and assign 
    // it to an int variable ag e. 
    cout << "\n\tplease friend, enter your age here for me to know : \n\t";
    int age = -1;
    cin >> age;
    if(age <= 0 || age > 110){
        cout << "\n\tYou're Kidding Haha!";
    } else {
        cout << "\t\t I hear you just had a birthday and you are " 
             << age << " years old.\n";
    }

    // 5. Add a condition about your friend age
    /*If your friend is under 12, write ‘‘Next year you will be ag e+1.’’ 
    If your friend is 17, write ‘‘Next year you will be able to vote.’’ 
    If your friend is over 70, write ‘‘Are you retired?’’*/
    if(age < 12){
        cout << "\t\tNext year you will be " << age+1;
    } else if (age == 17){
        cout << "\t\tNext year you will be able to vote!";
    } else if(age > 70){
        cout << "\t\tAre you retired?";
    }

    // 6. Add Sincerely Line
    cout << "\n\t Aight, Thanks mate";
    cout << "\n\n\t Sincerely, \n\n\n\t Muhammad Yoga Aminudin";
    cout << "\n=======================================================================";
}