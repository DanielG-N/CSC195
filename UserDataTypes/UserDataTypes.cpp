// UserDataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Sandwich.h"
#include <iostream>
using namespace std;

// typedef double currency; // c-style
using currency = double; // c++ style

void f1() {}

// struct data only
/*class Sandwich { // class default private
public:
    float price;
    char name[32];
    bool isHot;
public:
    void Display() { cout << "Price: " << price << endl; }
};*/

int main()
{
    Sandwich sandwich;
    sandwich.Read();
    sandwich.Write();
    /*int i = 5;
    char c = 34;
    // Implicit
    i = c;
    //explicit
    i = (int)c;
    // If going from bigger data type to smaller, must use explicit cast
    float f = 23.4f; // 4 bytes
    double d = 34.5; // 8 bytes

    f = (float)d;
    f = static_cast<float>(d);

    Sandwich turkey;
    turkey.price = 4.99f;
    turkey.isHot = true;
    turkey.Display();
    cout << sizeof(Sandwich);*/

    // enum class puts into scope
    enum class Difficulty { // : char
        Easy,
        Medium,
        Hard
    };

    Difficulty difficulty;
    difficulty = Difficulty::Easy;
    //int difficulty

    currency wage = 14.5f;

    f1();
}

