#include "Complex.h"


Complex::Complex(double real, double imag) : real{real}, imag{imag}
{
}

Complex::Complex(double real) : Complex{real, 0}
{
}
Complex::Complex() : Complex{0, 0}
{
}
Complex::~Complex()
{
}

void Complex::print() const
{

    std::cout << real;
    if (imag > 0)
    {
        std::cout << "+" << imag << "i" << std::endl;
    }
    else if (imag < 0)
    {
        std::cout << imag << "i" << std::endl;
    }
}

double Complex::getRealPart(void) const
{
    return real;
}
double Complex::getImagPart(void) const
{
    return imag;
}

/**
 * @brief Operator Overloading
 *
 */

Complex Complex::operator+(Complex rhs) const
{
    Complex temp(0, 0);
    temp.real = this->real + rhs.real;
    temp.imag = this->imag + rhs.imag;
    return temp;
}
Complex Complex::operator-(Complex rhs) const
{
    Complex temp(0, 0);
    temp.real = this->real - rhs.real;
    temp.imag = this->imag - rhs.imag;
    return temp;
}
//(a + bi)(c + di) = (ac – bd) + (ad + bc)i
Complex Complex::operator*(Complex rhs) const
{
    Complex temp(0, 0);
    temp.real = ((this->real * rhs.real) -
                 (this->imag * rhs.imag));

    temp.imag = ((this->real * rhs.imag) +
                 (this->imag * rhs.real));
    return temp;
}

Complex Complex::operator/(Complex rhs) const
{
    int div = (rhs.real * rhs.real) + (rhs.imag * rhs.imag);
    Complex tmp;
    tmp.real = (real * rhs.real) + (imag * rhs.imag);
    tmp.real /= div;
    tmp.imag = (imag * rhs.real) - (real * rhs.imag);
    tmp.imag /= div;
    return tmp;
}

bool Complex::operator==(const Complex &rhs) const
{
    if ((this->real == rhs.real) && (this->imag == rhs.imag))
        return true;
    else
        return false;
}

std::ostream &operator<<(std::ostream &os, Complex &rhs)
{

    os << rhs.real;
    if (rhs.imag > 0)
    {
        os << "+" << rhs.imag << "i" << std::endl;
    }
    else if (rhs.imag < 0)
    {
        os << rhs.imag << "i" << std::endl;
    }
    return os;
}

Complex operator+(const double lhs, const Complex rhs)
{
    Complex temp(0, 0);
    temp.real = lhs + rhs.real;
    temp.imag = rhs.imag;
    return temp;
}
Complex operator-(const double lhs, const Complex rhs)
{
    Complex temp(0, 0);
    temp.real = lhs - rhs.real;
    temp.imag = rhs.imag;
    return temp;
}
Complex operator/(const double lhs, const Complex rhs)
{
    Complex temp(0, 0);
    temp.real = ((lhs * rhs.real) -
                 (0 * rhs.imag));

    temp.imag = ((lhs * rhs.imag) +
                 (0 * rhs.real));
    return temp;
}
Complex operator*(const double lhs, const Complex rhs)
{
    int div = (rhs.real * rhs.real) + (rhs.imag * rhs.imag);
    Complex tmp;
    tmp.real = (lhs * rhs.real) + (0 * rhs.imag);
    tmp.real /= div;
    tmp.imag = (0 * rhs.real) - (lhs * rhs.imag);
    tmp.imag /= div;
    return tmp;
}
