#include <iostream>

class Base
{
private:
    int number;

protected:
    int protectedNumber;

public:
    Base(/* args */) = default;
    virtual ~Base() { std::cout << "Base destructor Called" << std::endl; };
    virtual void print(void) const
    {
        std::cout << "Base Function Called" << std::endl;
    }
};

class Child : public Base
{
private:
    /* data */
public:
    Child(/* args */) = default;
    virtual ~Child() { std::cout << "Child destructor Called" << std::endl; };
    virtual void print(void) const override
    {
        std::cout << "Child Function Called" << std::endl;
    }
};

class Shape
{
private:
    int x1, x2;
    int y1, y2;

public:
    Shape();
    ~Shape();

    virtual void draw(void) = 0;
    virtual void rotate(void) = 0;
    void print()
    {
        std::cout << "Hello";
    }
};

class OpenShape : public Shape
{
private:
    /* data */
public:
    OpenShape(/* args */);
    ~OpenShape();
};

class Line : public OpenShape
{
private:
    /* data */
public:
    Line(/* args */);
    ~Line();

    virtual void draw(void) override
    {
        std::cout << "Drawing!!";
    }
    virtual void rotate(void) override
    {
        std::cout << "Rotating!!";
    }
};

int main(void)
{
    Line a;
    // Base b;
    // Child c;

    // b.print();
    // c.print();
    // std::cout << "--------------------------\r\n";

    // Base *ptr1 = new Base;
    // Base *ptr2 = new Child;
    // Base *ptr3 = new Child;

    // ptr1->print();
    // ptr2->print();
    // ptr3->print();
    // std::cout << "--------------------------\r\n";

    // delete ptr1;
    // delete ptr2;
    // delete ptr3;

    // Base b;
    // Base &refb = b;

    // Child c;
    // Child &refc = c;

    // refb.print();
    // refc.print();

    return 0;
}