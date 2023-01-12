#include <iostream>
using namespace std;
int main()
{
    float n1;
    float n2;
    float n3;
    char op;
    cout << "Enter Number 1 :";
    cin >> n1;
    cout << "Enter Number 2:";
    cin >> n2;
    cout << "Enter Operator:";
    cin >> op;
    if (op == '+')
    {
        n3 =n1+n2;
        cout << " Result :"<<n3 <<endl;
    }
    else if ( op == '-')
    {
        n3 =n1-n2;
        cout << " Result :"<<n3 <<endl;
    }
    else if (op == '*')
    {
        n3 =n1*n2;
        cout << " Result :"<<n3 <<endl;
    }
    else if (op == '/')
    {
        n3 =n1/n2;
        cout << " Result :"<<n3 <<endl;
    }
    return 0;
}