#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;

    for ( a = 0; a <= 10; a++)
    {
        for ( b = 0; b <= 10; b++)
        {
            cout<<" ";
        }
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

    for ( a = 0; a <= 10; a++)
    {
        for ( b = 10; b >= a; b--)
        {
            cout<<" ";
        }
        for ( b = 10; b >= a; b--)
        {
            cout<<"*";
        }
        for ( b = 1; b <= a; b++)
        {
            cout<<" ";
        }
        for ( b = 1; b <= a; b++)
        {
            cout<<" ";
        }
        for ( b = 1; b <= a; b++)
        {
            cout<<" ";
        }
        for ( b = 0; b <= a; b++)
        {
            cout<<" ";
        }
        for ( b = 10; b >= a; b--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}