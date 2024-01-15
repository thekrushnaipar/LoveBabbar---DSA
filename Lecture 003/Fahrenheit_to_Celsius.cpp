#include <iostream>
using namespace std;

int main ()
{
    float f;

    cout << "Enter the Temperature in Fahrenheit :" << endl;
    cin >> f;

    float c = ((f-32) * 5) / 9;
    cout << "Temperature in Celsius =" << c << endl;

}