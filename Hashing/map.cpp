#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    map<int,int> hash;

    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    cout << hash[3];

}