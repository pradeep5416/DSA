#include <bits/stdc++.h>
using namespace std;

int pivot(vector<int> &arr, int low,int high){
    int p=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=p && i<=high-1){
            i++;
        }
        while(arr[j]>p && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}

void quickSort(vector<int> &arr, int low,int high){
    if(low<high){
        int pIndex=pivot(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}

vector<int> qS(vector<int> &arr){
    quickSort(arr,0,4);
    return arr;
}

int main(){
    vector<int> arr={5,4,3,2,1};
    cout << "Before Sorting: " << endl;
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    qS(arr);
    cout << "After Sorting: " << endl;
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
}