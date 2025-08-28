#include <iostream>
using namespace std;
int main()
{
    // variable, datatype and identifier(unique name of variable name)
    // studentfathername (lower case)
    // studentFatherName (camel case)
    // StudentFatherName (pascal case)

    // rules of identifier
    // int value 1 = 12; // can't be use space between variable name
    // int 1value = 23; // can't start with number
    int _first = 34;
    cout << _first;
    int value1 = 23;
    string user_name = "test";
    // int $dollarValue = 45;
    int $dollar$Value = 45;
    cout << "\n dollarValue =" << $dollar$Value;

    // int @number1 = 45;
    // cout << @number1;

    return 0;
}