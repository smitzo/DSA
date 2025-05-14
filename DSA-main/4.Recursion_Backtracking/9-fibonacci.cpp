#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){   // T.C ~ O(2^n) exponential

//base cases
    if (n==0){return 0;}
    if (n==1){ return 1;}   
    // OR we can also write if (n<=1 return n;)

    return {fibonacci(n-1)+fibonacci(n-2)};
}
int main (){
    cout<<fibonacci(9);
    return 0;
}