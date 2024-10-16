#include <bits/stdc++.h>
using namespace std;

void first(int n){
    if(n<1){
        return;
    }
    cout << n << " ";
    first(n-1);
    
}

int main(){
    int n=4;
    first(4);
}