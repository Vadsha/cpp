#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;

    for ( a = 1; a <= 5; a++)
    {
        for ( b = 5; b >= a; b--)
        {
            cout<<" ";
        }
        cout<<a<<" ";
        for ( b = 2; b <= a; b++)
        {
            cout<<a<<" ";
        }
        cout<<endl;
    }
    for ( a = 4; a >= 1; a--)
    {
        cout<<" ";
        for ( b = 4; b >= a; b--)
        {
            cout<<" ";
        }
        cout<<a<<" ";
        for ( b = 2; b <= a; b++)
        {
            cout<<a<<" ";
        }
        
        cout<<endl;
    }
    

    
    return 0;
}