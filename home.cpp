#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;

    for ( a = 0; a <= 4; a++)
    {
        for ( b = 4; b >= a; b--)
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
        cout<< endl;
    }

    for ( a = 0; a < 3; a++)
    {
        cout<<" ";
        for ( b = 0; b < 3; b++)
        {
            cout<<"*";
        }
        for ( b = 0; b < 3; b++)
        {
            cout<<" ";
        }
        for ( b = 0; b < 3; b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    





    return 0;
}