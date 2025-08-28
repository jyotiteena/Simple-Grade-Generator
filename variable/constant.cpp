#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
    // override
    int a = 56;
    cout << a << endl;
    a = 300;
    cout << a << endl;

    const int b = 34;
    b = 30;
    cout << "b =" << b << endl;

    PI = 45;
    cout << "PI =" << PI;
    return 0;
}