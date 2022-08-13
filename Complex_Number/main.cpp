#include "Complex.h"
#include "Complex.cpp"
#include <string>
#include <ostream>
using namespace std;
int main(int argc, char const *argv[])
{
    Complex a(5, 2);
    Complex b(5, 2);
    Complex c(0, 0);
    bool ans;
    c = a + b;
    cout << c;
    c = a - b;
    cout << c;
    c = a * b;
    cout << c;
    c = a / b;
    cout << c;
    c = 2 / b;
    cout << c;
    c = 2 * b;
    cout << c;
    ans = (a == b);
    cout << ans;
    return 0;
}