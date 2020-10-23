/*
Lottery Number Generator

Generates lottery numbers for the Mega Millions, Powerball, and Super Lotto draw games
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Displays program title
void title() {
    cout << "****************************************" << endl;
    cout << "Welcome to the LOTTERY NUMBER GENERATOR!" << endl;
    cout << "****************************************" << endl;
}

/*
Mega Millions
5(1-70)+ 1(1-25)
Odds: 1 in 302,575,350
*/
void mm() {
    srand((int)time(0));
    
    cout << "*MEGA MILLIONS*" << endl;
    cout << "Odds of winning: 1 in 302,575,350" << endl;
    cout << "Mega Millions numbers: ";

    for (int i = 0; i < 5; i++) {
        cout << (rand() % 70) + 1 << " ";
    }
    cout << ">" << (rand() % 25) + 1 << "<";
    cout << endl;
}

/*
Powerball
5(1-69)+ 1(1-26)
Odds: 1 in 292,201,338
*/
void pb() {
    srand((int)time(0));

    cout << "*POWERBALL*" << endl;
    cout << "Odds of winning: 1 in 292,201,338" << endl;
    cout << "Powerball numbers: ";

    for (int i = 0; i < 5; i++) {
        cout << (rand() % 69) + 1 << " ";
    }
    cout << ">" << (rand() % 26) + 1 << "<";
    cout << endl;
}

/*
Super Lotto
5(1-47)+ 1(1-27)
Odds: 1 in 41,416,353
*/
void sl() {
    srand((int)time(0));

    cout << "*SUPER LOTTO*" << endl;
    cout << "Odds of winning: 1 in 41,416,353" << endl;
    cout << "Super Lotto numbers: ";

    for (int i = 0; i < 5; i++) {
        cout << (rand() % 47) + 1 << " ";
    }
    cout << ">" << (rand() % 27) + 1 << "<";
    cout << endl;
}

int main()
{
    cout << endl;
    title();
    cout << endl;
    cout << "This program will generate random numbers" << endl;
    cout << "for the Mega Millions, Powerball, and" << endl;
    cout << "Super Lotto draw games." << endl;
    cout << endl;
    cout << "Play responsibly!" << endl;
    cout << endl;
    mm();
    cout << endl;
    pb();
    cout << endl;
    sl();
    cout << endl;
    return 0;
}