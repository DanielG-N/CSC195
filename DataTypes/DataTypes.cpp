// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string name;
    char initial;
    unsigned short age;
    bool isAdult;
    unsigned int zipcode;
    float wage;
    unsigned short daysWorked;
    short hoursWorkedPerDay[7];
    const float TAX = 0.1f;
    short totalHours = 0;

    cout << "Enter first name: ";
    cin >> name;
    cout << "Enter your last initial: ";
    cin >> initial;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18) {
        isAdult = true;
    }
    else {
        isAdult = false;
    }
    cout << "Enter your zipcode: ";
    cin >> zipcode;
    cout << "Enter your hourly wage: ";
    cin >> wage;
    cout << "Enter amount of days you have worked: ";
    cin >> daysWorked;
    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter hours worked for day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours = totalHours + hoursWorkedPerDay[i];
    }
    float grossIncome = totalHours * wage;
    float netIncome = grossIncome - grossIncome * TAX;
    cout << name << " worked for " << totalHours << " hours at $" << wage << " an hour.\n" << "Gross income: " << grossIncome << "\nNet income: " << netIncome;


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
