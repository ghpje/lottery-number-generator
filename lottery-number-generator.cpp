/*
Lottery Number Generator
Generates lottery numbers for the Mega Millions, Powerball, and Super Lotto draw games
*/

#include <iostream>
using namespace std;

// Title header
void titleBar();

// Menu options
void menuMain();

// Generate and print Mega Millions numbers
void megaMillions();

// Generate and print Powerball numbers
void powerBall();

// Generate and print Super Lotto numbers
void superLotto();

// Global variables
time_t now = time(NULL);

int main() {

    srand(time(NULL)); // Seed random number generator function with system time
    int option = 0;

    system("clear");
    titleBar();
    while (option != 5) {
        menuMain();
        cout << "Make your selection: ";
        cin >> option;
        cout << endl;
        switch (option) {
            case 1:
                system("clear");
                titleBar();
                megaMillions();
                cout << "Numbers generated on " << ctime(&now);
                cout << endl;
                break;
            case 2:
                system("clear");
                titleBar();
                powerBall();
                cout << "Numbers generated on " << ctime(&now);
                cout << endl;
                break;
            case 3:
                system("clear");
                titleBar();
                superLotto();
                cout << "Numbers generated on " << ctime(&now);
                cout << endl;
                break;
            case 4:
                system("clear");
                titleBar();
                megaMillions();
                powerBall();
                superLotto();
                cout << "Numbers generated on " << ctime(&now);
                cout << endl;
                break;
            case 5:
                cout << endl;
                exit(0);
            default:
                cout << "Your ipnut "<< option << " is invald. Select a number (1-5)";
                cout << endl;
                cout << endl;
                break;
        }
    }
    
    return 0;
}

// Title header
void titleBar() {
    cout << "\e[38;5;214m******************************************\e[0m" << endl;
    cout << "\e[38;5;214m*\e[38;5;45mWelcome to the LOTTERY NUMBER GENERATOR!\e[38;5;214m*\e[0m" << endl;
    cout << "\e[38;5;214m******************************************\e[0m" << endl;
    cout << endl;
    cout << "This program will generate random numbers for the Mega Millions, Powerball, and Super Lotto draw games." << endl;
    cout << "Play responsibly!" << endl;
    cout << endl;
}

// Menu options
void menuMain() {
    cout << "\e[38;5;214m------------------------\e[0m" << endl;
    cout << "\e[38;5;45mChoose an option below:\e[0m" << endl;
    cout << "\e[38;5;214m------------------------\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m1\e[38;5;214m)\e[0m \e[1;31;107mMega\e[1;38;5;45;48;5;255mMillions\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m2\e[38;5;214m)\e[0m \e[1;30;107mPOWER\e[1;97;41mBALL\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m3\e[38;5;214m)\e[0m \e[1;38;5;45;48;5;214mSuperLottoPLUS\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m4\e[38;5;214m)\e[0m \e[1mAll games\e[0m" << endl;
    cout << "\e[38;5;214m(\e[38;5;45m5\e[38;5;214m)\e[0m \e[1;31mQuit\e[0m" << endl;
    cout << "\e[38;5;214m------------------------\e[0m" << endl;
}

// Generate and print Mega Millions numbers
void megaMillions() {
/*
Mega Millions
5(1-70)+ 1(1-25)
Odds: 1 in 302,575,350
*/
    int mm[5];
    int lenMM = sizeof(mm)/sizeof(mm[0]);
    for (int i = 0; i < lenMM; i++) {
        mm[i] = (rand() % 70) + 1;
        for (int j = 0; j < i; j++) {
            if (mm[i] == mm[j]) {
                mm[i] = (rand() % 70) + 1;
            }
        }
    }
    sort (begin(mm), end(mm));
    cout << "Your winning \e[1;31;107mMega\e[1;38;5;45;48;5;255mMillions\e[0m numbers:" << endl;
    cout << "----------------------------------" << endl;
    for (int i = 0; i < lenMM; i++) {
        cout << "\e[1;30;107m" << mm[i] << "\e[0m ";
    }
    cout << "\e[1;97;43m" << (rand() % 25) + 1 << "\e[0m";
    cout << endl;
    cout << endl;
}

// Generate and print Powerball numbers
void powerBall() {
/*
Powerball
5(1-69)+ 1(1-26)
Odds: 1 in 292,201,338
*/
    int pb[5];
    int lenPB = sizeof(pb)/sizeof(pb[0]);
    for (int i = 0; i < lenPB; i++) {
        pb[i] = (rand() % 69) + 1;
        for (int j = 0; j < i; j++) {
            if (pb[i] == pb[j]) {
                pb[i] = (rand() % 69) + 1;
            }
        }
    }
    sort (begin(pb), end(pb));
    cout << "Your winning \e[1;30;107mPOWER\e[1;97;41mBALL\e[0m numbers:" << endl;
    cout << "-------------------------------" << endl;
    for (int i = 0; i < lenPB; i++) {
        cout << "\e[1;30;107m" << pb[i] << "\e[0m ";
    }
    cout << "\e[1;97;41m" << (rand() % 26) + 1 << "\e[0m";
    cout << endl;
    cout << endl;
}

// Generate and print Super Lotto numbers
void superLotto() {
/*Super Lotto
5(1-47)+ 1(1-27)
Odds: 1 in 41,416,353
*/
    int sl[5];
    int lenSL = sizeof(sl)/sizeof(sl[0]);
    for (int i = 0; i < lenSL; i++) {
        sl[i] = (rand() % 47) + 1;
        for (int j = 0; j < i; j++) {
            if (sl[i] == sl[j]) {
                sl[i] = (rand() % 47) + 1;
            }
        }
    }
    sort (begin(sl), end(sl));
    cout << "Your winning \e[1;38;5;45;48;5;214mSuperLottoPLUS\e[0m numbers:" << endl;
    cout << "------------------------------------" << endl;
    for (int i = 0; i < lenSL; i++) {
        cout << "\e[1;30;107m" << sl[i] << "\e[0m ";
    }
    cout << "\e[1;97;44m" << (rand() % 27) + 1 << "\e[0m";
    cout << endl;
    cout << endl;
}