#include <iostream>
using namespace std;

int main ()
{

    int n;

    cout << "Enter the value of n :" << endl;
    cin >> n;

    if (n > 0)
    {
        cout << "The value of n is Positive" << endl ;
    }

    else if (n < 0)
    {
        cout << "The value of n is Negative" << endl;
    }

    else
    {
        cout << "The value of n is Zero" << endl;
    }

}