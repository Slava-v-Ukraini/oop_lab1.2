#pragma once
#include <string>
#include <sstream>

using namespace std;

class Kvadrat

{
private:
    double x1, y1, x2, y2;
public:

    Kvadrat();
    bool Init(double _x1, double _y1, double _x2, double _y2);
    void Display()const;
    void Read();

    double Square()const;
    double Perymetr()const;
    double Side()const;

    bool SetX1(double _x1);
    bool SetY1(double _y1);
    bool SetX2(double _x2);
    bool SetY2(double _y2);


    double GetX1() const;
    double GetY1() const;
    double GetX2() const;
    double GetY2() const;

    string ToString() const;
};