/*  Nama      : Muhammad Yoga Aminudin
*   Tanggal   : Minggu, 21-Juli-2025
*   Tempat    : Kudus, 14:10 UTC+7
*   Deskripsi : Berisi langkah demi langkah menuju Bathroom dengan output String */

// these programs output a String, that will lead you, the reader
// to an imaginary upstair bathroom with tons of instruction to make sure you wont confuse

#include <iostream>

int main(){
    // cout cant be written in multiline such as cout << (you click enter, and still write the String)
    std::cout << "Suppose our house is a 3-dimensional 2x2x2 chessboard. The bathroom is"
              << "located on the 2nd floor in room B2, while we are on the 1st floor in room A1." 
              << "The stairs leading to the 2nd floor are on the 1st floor in room A2.\n"
              << "The building structure is as follows, each rooms r connected with a door: \n\n"
              << "|  A1  |  B1  |\n"
              << "|  A2  |  B2  |\n"
              << "====================== ENJOY =======================\n";
    std::cout << "Turn right!\n";
    std::cout << "Walk 7 steps forward\n";
    std::cout << "Walk 9 steps to the left\n";
    std::cout << "Walk 8 steps backward\n";
    std::cout << "Look around. If there is a staircase, walk toward it\n";
    std::cout << "Place your right foot on the first step\n";
    std::cout << "Place your left foot on the second step\n";
    std::cout << "Repeat this step until there are no more stairs\n";
    std::cout << "Place your right foot on the first step\n";
    std::cout << "Face the direction of the stairs\n";
    std::cout << "Walk 8 steps to the right\n";
    std::cout << "================== YOU HAVE ARRIVED ====================\n";
}