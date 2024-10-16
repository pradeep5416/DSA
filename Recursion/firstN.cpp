#include <bits/stdc++.h>
using namespace std;

void first(int n){
    if(n<1){
        return;
    }
    first(n-1);
    cout << n << " ";
}

int main(){
    int n=4;
    first(4);
}