#ifndef _MY_STRING_H_
#define _MY_STRING_H_
#include <iostream>
class Mystring
{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs);
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring(Mystring &&source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);      // copy
    Mystring &operator=(Mystring &&rhs);           // move assignement
    Mystring operator-() const;                    // make lower case
    Mystring operator+(const Mystring &rhs) const; // concatenate two string
    bool operator==(const Mystring &rhs) const;    // compare two string
    void display() const;
    int getLenght() const;
    const char *getStr() const;
};

#endif