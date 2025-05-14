#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int i=0;
int sum1(int n){ 
   
   if (n<1){
    return 0 ;
   }
    
    return sum1(n-1)+n;
}

int sum2(int i,int n){  //parameterised method sum2 call

    if (i<1){
        return n;
    }

    return sum2(i-1,n+i);
}
int main (){
    cout<<sum1(5)<<endl; //f(5)->5+f(4) , f(4)->4+f(3), f(3)->3+f(2), f(2)-> 2+f(1), f(1)->1+f(0), f(0)=0 returns 0
    //f(1)->1+f(0)=1+0=1 f(2)=2+1=3 f(3)=3+3=6 f(4)=4+6=10 f(5)=5+10=15 
    cout<<sum2(5,0)<<endl; //calls sum2(5,0) -> calls sum2(4,4)->calls sum2(3,7)->calls(2,10)->calls(1,17)->returns 17 to (2,16)->re

    return 0;
}