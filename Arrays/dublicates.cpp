#include <bits/stdc++.h>
using namespace std;

int main(){
    int i=0;
    int arr[7]={1,1,2,2,2,3,3};
    for(int j=1;j<7;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }

    for(int j=0;j<=i;j++){
        cout << arr[j] << " ";
    }
}