/*
Lottery Number Generator
Generates lottery numbers for the Mega Millions, Powerball, and Super Lotto draw games

Odds:
Mega Millions
5(1-70)+ 1(1-25)
Odds: 1 in 302,575,350

Powerball
5(1-69)+ 1(1-26)
Odds: 1 in 292,201,338

Super Lotto
5(1-47)+ 1(1-27)
Odds: 1 in 41,416,353
*/

#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0);
    srand((int)time(NULL));
    int mm[5];
    int pb[5];
    int sl[5];
    int lenMM = sizeof(mm)/sizeof(mm[0]);
    int lenPB = sizeof(pb)/sizeof(pb[0]);
    int lenSL = sizeof(sl)/sizeof(sl[0]);

    cout << endl;
    cout << "****************************************" << endl;
    cout << "Welcome to the LOTTERY NUMBER GENERATOR!" << endl;
    cout << "****************************************" << endl;
    cout << endl;
    cout << "This program will generate random numbers for the Mega Millions, Powerball, and Super Lotto draw games." << endl;
    cout << endl;
    cout << "Please play responsibly!" << endl;
    cout << endl;
    cout << "These numbers were generated on " << ctime(&now);
    cout << "========================================" << endl;
    cout << "*MEGA MILLIONS*" << endl;
    cout << "Draw days: Tuesday and Friday" << endl;
    cout << "Odds of winning: 1 in 302,575,350" << endl;
    cout << "Mega Millions numbers: ";
    for (int i = 0; i < size(mm); i++) {
        mm[i] = (rand() % 70) + 1;
        for (int j = 0; j < i; j++) {
            if (mm[i] == mm[j]) {
                mm[i] = (rand() % 70) + 1;
            }
        }
    }
    sort(mm, mm + lenMM);
    for (int i = 0; i < size(mm); i++) {
        cout << mm[i] << " ";
    }
    cout << "<" << (rand() % 25) + 1 << ">";
    cout << endl;
    cout << endl;
    cout << "*POWERBALL*" << endl;
    cout << "Draw days: Monday, Wednesday, Saturday" << endl;
    cout << "Odds of winning: 1 in 292,201,338" << endl;
    cout << "Powerball numbers: ";
    for (int i = 0; i < size(pb); i++) {
        pb[i] = (rand() % 69) + 1;
        for (int j = 0; j < i; j++) {
            if (pb[i] == pb[j]) {
                pb[i] = (rand() % 69) + 1;
            }
        }
    }
    sort(pb, pb + lenPB);
    for (int i = 0; i < size(pb); i++) {
        cout << pb[i] << " ";
    }
    cout << "<" << (rand() % 26) + 1 << ">";
    cout << endl;
    cout << endl;
    cout << "*SUPER LOTTO*" << endl;
    cout << "Draw days: Wednesday and Saturday" << endl;
    cout << "Odds of winning: 1 in 41,416,353" << endl;
    cout << "Super Lotto numbers: ";
    for (int i = 0; i < size(sl); i++) {
        sl[i] = (rand() % 47) + 1;
        for (int j = 0; j < i; j++) {
            if (sl[i] == sl[j]) {
                sl[i] = (rand() % 47) + 1;
            }
        }
    }
    sort(sl, sl + lenSL);
    for (int i = 0; i < size(sl); i++) {
        cout << sl[i] << " ";
    }
    cout << "<" << (rand() % 27) + 1 << ">";
    cout << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "Good luck!" << endl;
    cout << endl;
    return 0;
}
