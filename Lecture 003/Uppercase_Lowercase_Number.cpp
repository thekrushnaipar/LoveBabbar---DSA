#include <iostream>
using namespace std;

int main ()
{

    char X;
    cout << "Enter a character:";
    cin >> X;

    if (X >= 'A' && X<= 'Z')
    {
        cout << "The character is Uppercase";
    }

    else if (X >= 'a' && X <= 'z')
    {
        cout << "The character is Lowercase";
    }

    else if (X >= '0' && X <= '9')
    {
        cout << "This is Digit";
    }

}