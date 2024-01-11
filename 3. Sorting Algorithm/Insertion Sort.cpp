/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

void Insertion_Sort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int temp, j;
        temp = arr[i];
        j = i-1;

        while(j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
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

    Insertion_Sort(arr, n);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}

