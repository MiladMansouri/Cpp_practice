#include "Mystring.h"
#include "Mystring.cpp"

using namespace std;

int main()
{
    std::cout << "start\r\n";
    // Mystring a("Hello");
    // a = Mystring("hi");
    // a = "bonjour"; // move assignemet (r_value)

    Mystring larry{"Larry"};
    Mystring milad{"MILAD"};

    cout << (larry == milad) << endl;
    cout << (larry == larry) << endl;

    Mystring newObj = -milad;
    newObj.display();

    Mystring newObj2 = larry + milad;
    newObj2.display();

    milad = -milad;
    milad.display();

    Mystring obj3{"larry"};
    Mystring obj4{"Milad"};
    Mystring obj5;

    cout << "Enter the third stooges first name:";
    cin >> obj5;

    cout << "The three stiiges are " << obj3 << "," << obj4 << ",and " << obj5;

    cout << "\nEnter the three stooges names sperated by spase:" << endl;

    cin >> obj3 >> obj4 >> obj5;

    cout << "The three stooges are " << obj3 << " " << obj4 << " " << obj5;

    return 0;
}