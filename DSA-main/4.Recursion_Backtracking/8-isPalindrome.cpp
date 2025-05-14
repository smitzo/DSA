#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string& str,int start){
    if (start>=str.size()/2){
        return true;
    }

    if (str[start]!=str[str.size()-start-1]){
        return false;
    }
    
    else return isPalindrome(str,start+1);
}
int main (){
    string str1="nitinmadam";
    cout<<isPalindrome(str1,0);
}