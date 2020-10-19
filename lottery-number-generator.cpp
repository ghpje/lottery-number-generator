#include <iostream>
using namespace std;

//Displays program title
void title() {
    cout << "****************************************" << endl;
    cout << "Welcome to the LOTTERY NUMBER GENERATOR!" << endl;
    cout << "****************************************" << endl;
}

//Outputs Mega Millions numbers
void mm() {
    cout << "Mega Millions title" << endl;
    cout << "Mega Millions possibilities" << endl;
    cout << "Mega Millions numbers" << endl;
}

//Outputs Powerball numbers
void pb() {
    cout << "Powerball title" << endl;
    cout << "Powerball possibilities" << endl;
    cout << "Powerball numbers" << endl;
}

//Outputs Super Lotto numbers
void sl() {
    cout << "Super Lotto title" << endl;
    cout << "Super Lotto possibilities" << endl;
    cout << "Super Lotto numbers" << endl;
}

int main()
{
    cout << endl;
    title();
    cout << endl;
    cout << "Body" << endl;
    cout << endl;

    mm();
    cout << endl;

    pb();
    cout << endl;

    sl();
    cout << endl;

    return 0;
}