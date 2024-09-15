#include <iostream>
using namespace std;

// voting system
int main()
{
    int a;
    cout << "Enter your age : ";
    cin >> a;

    if(a>100)
    {
        cout<<"over age";
    }
    else if(a>=18)
    {
        cout<<"your Eligible for vote";
    }
    else
    {
        cout<<"NOt Eligible for vote";
    }
}