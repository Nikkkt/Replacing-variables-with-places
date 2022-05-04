#include <iostream>
using namespace std;

int main()
{
    string a, b, c, d, e;

    //with 3 variables
    cout << "Enter the values of two variables: " << endl;

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << "It was: a = " << a << ", b = " << b << endl;
    c = a;
    a = b;
    b = c;

    cout << "It became: a = " << a << ", b = " << b << endl;

    //with 2 variabels
    cout << "Enter the values of two variables: " << endl;

    cout << "d = ";
    cin >> d;
    cout << "e = ";
    cin >> e;

    cout << "It was: d = " << d << ", e = " << e << endl;
    swap(e, d);

    cout << "It became: d = " << d << ", e = " << e << endl;
}
