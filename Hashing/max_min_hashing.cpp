#include <bits/stdc++.h>
using namespace std;

void hashing(int arr[],int n){
    unordered_map<int,int> map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
    }
    int max_ele=0;
    int max_freq=0;
    int min_ele=0;
    int min_freq=n;
    for(auto i:map){
        int ele=i.first;
        int count=i.second;
        if(count>max_freq){
            max_ele=ele;
            max_freq=count;
        }
        if(count<min_freq){
            min_ele=ele;
            min_freq=count;
        }
    }
    cout << "Max Frequency Element Is: " << max_ele << endl;
    cout << "Min Frequency Element Is: " << min_ele;

}

int main(){
    int n=4;
    int arr[n]={1,2,1,3};
    hashing(arr,n);
}