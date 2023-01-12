#include<iostream>
using namespace std;
int linear(int left, int inp, int arr[], int right);
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    int inp;
    int res;
    cout<<"Enter your number : ";
    cin >> inp;
    res = linear(0, inp, arr, 9);
    if (res == -1)
    {
        cout << "ERROR"<< endl;
    }
    else
    {
        cout<<"The position is : "<<res<<endl;
    }
    
    return 0;
}

int linear(int left, int inp, int arr[],int right)
{
    while (left <= right)
    {
        if (arr[left] == inp)
        {
            return left;
        }
        else
        {
            left = left + 1;
        }        
    }
    return -1;
}