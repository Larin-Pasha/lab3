#include"Fazzynumber.h"
#include<iostream>
#include<string>
using namespace std;

Fazzynumber::Fazzynumber()
{
    A = 0;
    ai = 0;
    ar = 0;
}

Fazzynumber::Fazzynumber(int X, int xi, int xr)
{
    A = X;
    ai = xi;
    ar = xr;
}

Fazzynumber Fazzynumber::Init(int X, int xi, int xr)
{
    Fazzynumber tmp;
    tmp.A = X;
    tmp.ai = xi;
    tmp.ar = xr;
    return tmp;
}

Fazzynumber Fazzynumber::Read()
{
    Fazzynumber tmp;
    cin >> tmp.A;
    cin >> tmp.ai;
    cin >> tmp.ar;
    return tmp;
}

void Fazzynumber::Display()
{

    cout << ai << "," << A << "," << ar << ")" << endl;
}

void Fazzynumber::Display_error1(Fazzynumber D)
{
    if (D.A > 0 || D.A - D.ai > 0)
    {
        cout << ai << "," << A << "," << ar << ")" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
}

void Fazzynumber::Display_error2(Fazzynumber D)
{
    if (D.A > 0 || (D.A - D.ai) > 0)
    {
        cout << ai << "," << A << "," << ar << ")" << endl;
    }
    else
    {
        cout << "Error" << endl;
    }
}

Fazzynumber Fazzynumber::toString()
{
    char str = (char)A + (char)ai + (char)ar;
    return Fazzynumber();
}

Fazzynumber Fazzynumber::sum(Fazzynumber M)
{
    Fazzynumber tmp;
    tmp.ai = this->A + M.A - this->ai - M.ar;
    tmp.A = this->A + M.A;
    tmp.ar = this->A + M.A + this->ar + M.ar;
    cout << "A+B=(";
    return tmp;
}

Fazzynumber Fazzynumber::subtract(Fazzynumber M)
{
    Fazzynumber tmp;
    tmp.ai = this->A - M.A - this->ai - M.ar;
    tmp.A = this->A - M.A;
    tmp.ar = this->A - M.A + this->ar + M.ar;
    cout << "A-B=(";
    return tmp;
}

Fazzynumber Fazzynumber::multiplication(Fazzynumber M)
{
    Fazzynumber tmp;
    tmp.ai = this->A * M.A - M.A * this->ai - this->A * M.ai + this->ai * M.ai;
    tmp.A = this->A * M.A;
    tmp.ar = this->A * M.A + M.A * this->ai + this->A * M.ai + this->ai * M.ai;
    cout << "A*B=(";
    return tmp;
}

Fazzynumber Fazzynumber::inverse(Fazzynumber M)
{
    Fazzynumber tmp;
    if (M.A > 0 || M.A - M.ai > 0)
    {
        tmp.ai = 1 / (this->A + this->ar);
        tmp.A = 1 / this->A;
        tmp.ar = 1 / (this->A - this->ai);
        cout << "1/A=(";
    }
    return tmp;
}


Fazzynumber Fazzynumber::division(Fazzynumber M)
{
    Fazzynumber tmp;
    if (M.A > 0 || (M.A - M.ai) > 0)
    {
        tmp.ai = (this->A - this->ai) / (M.A + M.ar);
        tmp.A = this->A / M.A;
        tmp.ar = (this->A + this->ar) / (M.A - M.ar);
        cout << "A/B=(";
    }
    return tmp;
}

Fazzynumber Fazzynumber::result(Fazzynumber R)
{
    this->ai = R.ai;
    this->A = R.A;
    this->ar = R.ar;
    return Fazzynumber();
}
