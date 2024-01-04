/*//  بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ  //*/
/*//   Md Sumon Hossain Khan   //*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector <int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int index;
    cin >> index;

    v.erase(v.begin()+index);
    n-=1;

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }





    return 0;
}