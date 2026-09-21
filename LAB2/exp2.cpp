#include <iostream>
using namespace std;


void callByValue(int x)
{
    x = x + 10;
    cout << "Inside Call by Value: " << x << endl;
}


void callByReference(int &x)
{
    x = x + 10;
    cout << "Inside Call by Reference: " << x << endl;
}


void callByAddress(int *x)
{
    *x = *x + 10;
    cout << "Inside Call by Address: " << *x << endl;
}

int main()
{
    int a = 10, b = 10, c = 10;

    cout << "Before Call by Value: " << a << endl;
    callByValue(a);
    cout << "After Call by Value: " << a << endl << endl;

    cout << "Before Call by Reference: " << b << endl;
    callByReference(b);
    cout << "After Call by Reference: " << b << endl << endl;

    cout << "Before Call by Address: " << c << endl;
    callByAddress(&c);
    cout << "After Call by Address: " << c << endl;

    return 0;
}