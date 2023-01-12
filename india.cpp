#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;

    for ( a = 0; a <= 10; a=a+1)
    {
        for ( b = 10; b >= a; b--)
        {
            cout<<" ";
        }

        for ( b = 0; b <= a; b++)
        {
            cout<<"*";
        }
        for ( b = 0; b < a; b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for ( a = 10; a >= 0; a=a-1)
    {
        for ( b = 10; b >= a; b--)
        {
            cout<<" ";
        }
        cout<<" ";
        for ( b = 1; b <= a; b++)
        {
            cout<<"*";
        }
        for ( b = 1; b < a; b++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
 
    return 0;
}