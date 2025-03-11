#include "square.h"
#include <iostream>

Kvadrat::Kvadrat()
{
    Init(0, 0, 1, 1);
}

bool Kvadrat::Init(double _x1, double _y1, double _x2, double _y2)
{
    if (SetX1(_x1) && SetX2(_x2) && SetY1(_y1) && SetY2(_y2)) {
        cout << "Good Inicialization:\n" << ToString() << endl;
        return true;
    }
    else {
        cout << "Bad Inicialization\n";
        return false;
    }
}


void Kvadrat::Display() const
{
    cout << ToString();
}

void Kvadrat::Read()
{
    double _x1, _y1, _x2, _y2;
    do {
        cin >> _x1 >> _y1 >> _x2 >> _y2;
    } while (!Init(_x1, _y1, _x2, _y2));
}

double Kvadrat::Side() const
{
    return fabs(x1 - x2);
}

double Kvadrat::Square() const
{
    return Side() * Side();
}

double Kvadrat::Perymetr() const
{
    return 4 * Side();
}

bool Kvadrat::SetX1(double _x1) {
    if (_x1 >= 0) {
        x1 = _x1;
        return true;
    }
    return false;
}

bool Kvadrat::SetY1(double _y1) {
    if (_y1 >= 0) {
        y1 = _y1;
        return true;
    }
    return false;
}

bool Kvadrat::SetX2(double _x2) {
    if (_x2 >= 0) {
        x2 = _x2;
        return true;
    }
    return false;
}

bool Kvadrat::SetY2(double _y2) {
    if (_y2 >= 0) {
        y2 = _y2;
        return true;
    }
    return false;
}



double Kvadrat::GetX1() const { return x1; }
double Kvadrat::GetY1() const { return y1; }
double Kvadrat::GetX2() const { return x2; }
double Kvadrat::GetY2() const { return y2; }

string Kvadrat::ToString() const
{
    stringstream sout;
    sout << "Coordinates of square: (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << ")"
        << "\nS: " << Square()
        << "\nP: " << Perymetr()
        << "\nSide: " << Side();
    return sout.str();
}