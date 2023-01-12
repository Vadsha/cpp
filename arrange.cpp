#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,55,30,27,91};
    int i;
    int j;
    int x;
    int y;
    for ( i = 0; i <= 4; i++)
    {
        for ( j = i + 1; j <= 4 ; j++)
        {
            if (arr[i] < arr[j])
            {
                y =arr[i];
                x =arr[j];
                arr[i] = x;
                arr[j] = y;
            }
            
        }
    cout << arr[i] << endl;
    }

    return 0;
}