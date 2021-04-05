#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::TAX = 0.1f;

void Employee::Read() {
    cout << "Enter first name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
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
    cout << endl;

    grossIncome = totalHours * wage;
    netIncome = grossIncome - grossIncome * TAX;
}
void Employee::Write() {

    cout << endl << name << " worked for " << totalHours << " hours at $" << wage << " an hour.\n" << "Gross income: " << grossIncome << "\nNet income: " << netIncome << endl;

}