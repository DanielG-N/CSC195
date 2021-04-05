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
    unsigned short hoursWorkedPerDay[7];
    const float TAX = 0.1f;
    unsigned short totalHours = 0;

    cout << "Enter first name: ";
    cin >> name;
    cout << "Enter your last initial: ";
    cin >> initial;
    cout << "Enter your age: ";
    cin >> age;
    isAdult = (age >= 18);
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

    cout << endl << name << " worked for " << totalHours << " hours at $" << wage << " an hour.\n" << "Gross income: " << grossIncome << "\nNet income: " << netIncome;
}
