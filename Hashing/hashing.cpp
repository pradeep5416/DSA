#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[100]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    cout << hash[2] << endl;
    cout << hash[3] << endl;

}