#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;

    for ( a = 0; a <= 5; a=a+1)
    {
        for ( b = 5; b >= a; b--)
        {
            cout<<" ";
        }

        for ( b = 1; b <= a; b++)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
    

    for ( a = 5; a >= 0; a--)
    {
        cout<<" ";
        for ( b = 5; b >= a; b--)
        {
            cout<<" ";
        }
        for ( b = 1; b < a; b++)
        {
            cout<<b<<" ";
        }

        
        cout<<endl;
    }
    

    return 0;
}


