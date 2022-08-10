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

    return 0;
}