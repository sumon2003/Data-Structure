/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[], int n, int value)
{
    int l = 0;
    int r = n - 1;
    
    while(l <= r)
    {
        int mid = (l + r) / 2;

        if(arr[mid] == value)
        {
            return mid;
            break;
        }
        else if(arr[mid] > value)
        {
            r = mid - 1;
        }
        else if(arr[mid] < value)
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int value;
    cin >> value;
    
    int result = Binary_Search(arr, n, value);

    if(result == -1)
    {
        cout << "Value not found" << endl;
    }
    else
    {
        cout << "Value found at index" << " " << result << endl;
    }


    return 0;
}