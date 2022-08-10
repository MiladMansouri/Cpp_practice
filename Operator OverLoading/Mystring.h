#ifndef _MY_STRING_H_
#define _MY_STRING_H_

class Mystring
{
private:
    char *str;

public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs);

    void display() const;
    int getLenght() const;
    const char *getStr() const;
};

#endif