#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[7]={1,2,3,4,4,6,5};
    int large=arr[0];
    int slarge=INT16_MIN;
    for(int i=0;i<7;i++){
        if(arr[i]>large){
            slarge=large;
            large=arr[i];
        }else if(arr[i]<large && arr[i]>slarge){
            slarge=arr[i];
        }
    }

    cout <<large << " " << slarge;
    
}