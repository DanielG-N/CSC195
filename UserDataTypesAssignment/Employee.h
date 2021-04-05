#pragma once

class Employee {
private:
    char name[32];
    unsigned short age;
    unsigned int zipcode;
    float wage;
    unsigned short daysWorked;
    unsigned short hoursWorkedPerDay[7];
    static const float TAX;
    float grossIncome;
    float netIncome;
    unsigned short totalHours = 0;
    
public:
    void Read();
    void Write();
};