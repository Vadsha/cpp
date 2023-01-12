#include<iostream>
using namespace std;
int binary(int left , int right , int num);
int main()
{
    int i;
    int num;
    int res;
    int arr[10]= {0,1,2,3,4,5,6,7,8,9};


    cout << "plz enter the number : ";
    cin>>num;
    res = binary(0 , 9 ,  num);
    if (res == -1)
    {
        cout << "ERROR"<<endl;
    }
    else
    {
        cout << "the position is : "<< res << endl;
    }
    
    
    
    return 0;
}
int binary(int left , int right , int num)
{
    while (left <= right)
    {
        int mid = left + (right - left ) / 2;
        if (mid == num)
        {
            return mid;
        }
        else if (mid < num)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1 ;
        }
        
        
    }
    return -1;
}