#include <bits/stdc++.h>
using namespace std;

bool palindrome_bruteforce(string s){
    int i=0;
    int j=s.size()-1;
    while(i!=j){
        if(!isalnum(s[i])){
            i++;
        }
        else if(!isalnum(s[j])){
            j--;
        }
        else if(tolower(s[i])!=tolower(s[j])){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}
bool palindrome_recursive(string& s,int i){
    if(i>=s.length()/2){
        return true;
    }
    
    if(s[i]!=s[s.length()-i-1]){
        return false;
    }

    return palindrome_recursive(s,i+1);
}
int main(){
    string s="madam";
    cout << palindrome_bruteforce(s);
    cout << palindrome_recursive(s,0);
}