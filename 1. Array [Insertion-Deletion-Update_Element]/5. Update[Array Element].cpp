/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int index;
    cin >> index;
    
    int value;
    cin >> value;

    for(int i=0; i<n; i++){
        arr[index] = value;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }


    return 0;
}