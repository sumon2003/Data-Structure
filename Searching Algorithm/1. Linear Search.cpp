/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int value;
    cin >> value;
    
    for(int i=0; i<n; i++)
    {
        if(arr[i] == value)
        {
            cout << "Value found at index" << " " << i << endl;
            return 0;
        }
    }
    
    cout << "Value not found" << endl;


    return 0;
}