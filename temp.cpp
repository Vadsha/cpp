#include<iostream>
using namespace std;
int main()
{
    int cel;
    int hour;

    for ( hour = 1; hour <= 24; hour++)
    {
        cout<<hour<<" : "<<endl;
        for ( cel = 180; cel <= 4320; cel =  cel + 180)
        {
            cout<<cel<<endl;
        }
        
    }
    
    
    return 0;
}