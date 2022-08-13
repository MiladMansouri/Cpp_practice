#ifndef _COMPLEX_H
#define _COMPLEX_H
#include <iostream>

using namespace std;

class Complex
{
    friend Complex operator+(const double lhs, const Complex rhs);
    friend Complex operator-(const double lhs, const Complex rhs);
    friend Complex operator/(const double lhs, const Complex rhs);
    friend Complex operator*(const double lhs, const Complex rhs);
    friend std::ostream &operator<<(std::ostream &os, Complex &rhs);

private:
    double imag;
    double real;

public:
    Complex();
    Complex(double real);
    Complex(double real, double imag);
    double getRealPart(void) const;
    double getImagPart(void) const;
    void print() const;

    Complex operator+(const Complex rhs) const;
    Complex operator-(const Complex rhs) const;
    Complex operator/(const Complex rhs) const;
    Complex operator*(const Complex rhs) const;
    bool operator==(const Complex &rhs) const;
    ~Complex();
};

#endif
