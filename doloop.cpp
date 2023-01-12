#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    char op;
    char letter;
    do
    {
        cout << "Enter a : ";
        cin >> a;
        cout << "Enter b : ";
        cin >> b;
        cout << "Enter operator : ";
        cin >> op;
            if (op == '+')
            {
                c = a + b;
            }
            else if(op == '-')
            {
                c = a - b;
            }
            else if(op == '*')
            {
                c = a * b;
            }
            else if (op == '/')
            {
                c = a / b;
            }
            
            else
            {
                cout << "ERROR";
            }
            cout <<c<<endl;
            cout << "enter n to stop : ";
            cin >> letter;

      }while(letter != 'n');
    
    return 0;
}