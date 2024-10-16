#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n){
    int flag=0;
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
                flag=1;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        if(flag=0){
            return;
        }
    }
}

int main(){
    int n;

    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Before Sorting: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    selection_sort(arr,n);
    cout << "After Sorting: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}