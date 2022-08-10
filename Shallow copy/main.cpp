#include <iostream>

class Shallow
{
private:
    int *data;

public:
    Shallow(int a);
    Shallow(const Shallow &source);
    void setData(int a);
    int getData(void);
    ~Shallow();
};

Shallow::Shallow(int a)
{
    data = new int;
    *data = a;
}
Shallow::Shallow(const Shallow &source)
    : data{source.data}
{
    std::cout << "Copy constructor called!";
    // deep copy
    data = new int;
    *data = *source.data;
}
void Shallow::setData(int a)
{
    *data = a;
}
int Shallow::getData(void)
{
    return *data;
}
Shallow::~Shallow()
{
    delete data;
}

void display(Shallow obj)
{
    std::cout << "Data is :" << obj.getData() << std::endl;
}
int main()
{
    Shallow obj1(100);
    display(obj1);

    Shallow obj2(100);
    display(obj2);
    obj2.setData(1000);

    return 0;
}