// Author: Anthony
// Admission number BSCIT-05-0097/2024
// Title: Program to display player information using structure
// Description: This program demonstrates the use of structures in C++ to store and display player information.
// The program defines a structure named Player with three members: name, level, and score.
// The program then defines a function displayPlayer() that takes a Player object as an argument and displays the player's information.
// In the main function, the program creates two Player objects p1 and p2, and prompts the user to enter the player's name, level, and score.
// The program then displays the player's information using the displayPlayer() function.
#include <iostream>
using namespace std;

struct Player {
    string name;  // Player's name
    int level;    // Player's level
    int score;    // Player's score
};

// Function to display player information
void displayPlayer(const Player &P) {
    cout << "Name: " << P.name << endl;
    cout << "Level: " << P.level << endl;
    cout << "Score: " << P.score << endl;
}

int main() {
    Player p1, p2;

    // Input player 1 details
    cout << "Enter Player 1 name: ";
    cin >> p1.name;
    cout << "Enter Player 1 level: ";
    cin >> p1.level;
    cout << "Enter Player 1 score: ";
    cin >> p1.score;

    // Input player 2 details
    cout << "Enter Player 2 name: ";
    cin >> p2.name;
    cout << "Enter Player 2 level: ";
    cin >> p2.level;
    cout << "Enter Player 2 score: ";
    cin >> p2.score;

    // Display player details
    cout << "Player 1 Details:" << endl;
    displayPlayer(p1);
    
    cout << "Player 2 Details:" << endl;
    displayPlayer(p2);

    return 0;
}
