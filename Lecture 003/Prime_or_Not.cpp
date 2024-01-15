#include <iostream>
using namespace std;

int main ()
{

    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;

    int i = 2;
    while (i < n)
    {
        if ( n % i == 0)
        {
            cout << "Number is Not prime!" << endl;
        }
        i = i + 1;
    }
    
    
        cout << "Number is Prime !" << endl;
    

}