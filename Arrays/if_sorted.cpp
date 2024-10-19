#include <bits/stdc++.h>
using namespace std;

bool check_sorted(int arr[], int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){

        }else{
            return false;
        }
    }
    return true;
}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    cout << check_sorted(arr,7);
}