/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

void Bubble_Sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
               // swap(arr[j], arr[j+1]);
               int temp =   arr[j];
               arr[j]   = arr[j+1];
               arr[j+1] =     temp;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    Bubble_Sort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}