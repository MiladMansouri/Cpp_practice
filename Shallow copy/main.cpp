#include <iostream>
#include <vector>
class Shallow
{
private:
    int *data;

public:
    Shallow(int a);
    Shallow(const Shallow &source);
    Shallow(Shallow &&source);
    void setData(int a);
    int getData(void);
    ~Shallow();
};

Shallow::Shallow(int a)
{
    data = new int;
    *data = a;
    std::cout << this << " Constructor called!\r\n";
}
Shallow::Shallow(const Shallow &source)
    : data{source.data}
{
    std::cout << this << " Copy constructor called!\r\n";
    // deep copy
    data = new int;
    *data = *source.data;
}
Shallow::Shallow(Shallow &&source) : data{source.data}
{
    source.data = nullptr;
    std::cout << this << " Move constructor called!\r\n";
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
    std::cout << this << " Disconstructor called!\r\n";
}

void display(Shallow obj)
{
    std::cout << " Data is :" << obj.getData() << std::endl;
}
int main()
{
    /*
        Shallow obj1(100);
        display(obj1);

        Shallow obj2(100);
        display(obj2);
        obj2.setData(1000);
    */
    std::vector<Shallow> vTemp;
    vTemp.push_back(Shallow{10});
    vTemp.push_back(Shallow{20});
    return 0;
}