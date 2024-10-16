#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int i){
    int len=4;
    if(i>=len){
        return;
    }
    reverse(arr,i+1);
    cout << arr[i] << " ";
}
int main(){
    int n=4;
    int arr[n]={1,2,3,4};
    reverse(arr,0);
}