// UserDataTypesAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    Employee employees[10];

    unsigned short numEmployees;
    cout << "Enter number of employees: ";
    cin >> numEmployees;
    
    for (int i = 0; i < numEmployees; i++) {
        employees[i].Read();
    }
    for (int i = 0; i < numEmployees; i++) {
        employees[i].Write();
    }
}
