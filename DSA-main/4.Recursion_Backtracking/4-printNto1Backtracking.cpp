#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printNum(int i, int n){

    if (i<1){
        return;
    }
    cout<<i<<" ";   
    printNum(i-1,n);
    
}

int main (){
    printNum(10,10);
    return 0;
}