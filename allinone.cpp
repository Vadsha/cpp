#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter : ";
    cin>>c;

    if (c == 'h')
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
    }

    else if (c =='d')
    {
        int a;
        int b;

        for ( a = 0; a <= 10; a=a+1)
        {
            for ( b = 10; b >= a; b--)
            {
                cout<<" ";
            }
        cout<<"*";

            for ( b = 0; b <= a; b++)
            {
                cout<<" ";
            }
            for ( b = 0; b < a; b++)
            {
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }

        for ( a = 10; a >= 0; a=a-1)
        {
            for ( b = 10; b >= a; b--)
            {
                cout<<" ";
            }
        cout<<"*";
            cout<<" ";
            for ( b = 1; b <= a; b++)
            {
                cout<<" ";
            }
            for ( b = 1; b <= a; b++)
            {
                cout<<" ";
            }
            cout<<"*";
            cout<<endl;
        }
    }
    
    else if (c =='s')
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
    }

    else if (c =='n')
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
    }
    else{cout<<"Error";}
    
    cout<<endl;
    return 0;
}
