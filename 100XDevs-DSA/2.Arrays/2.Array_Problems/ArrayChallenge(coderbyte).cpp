#include <bits/stdc++.h>
using namespace std ;

 string ArrayChallenge(vector<int>arr){
    int diff=arr[1]-arr[0];
    int div=arr[1]/arr[0];
    bool isArithmetic=true;
    bool isGeometric=true;

    for (int i=1;i<arr.size();i++){

        if (arr[i]-arr[i-1]==diff){
            isArithmetic=true;
            
        }
        else {
            isArithmetic=false;
            break;

        }

        
    }
        for (int i=1;i<arr.size();i++){

        if (arr[i]/arr[i-1]==diff){
            isGeometric=true;
            
        }
        else {
            isGeometric=false;
            break;
        }

        
    }

    if (isArithmetic)return "Arithmetic" ;
    else if (isGeometric) return "Geometric";


 }
int main (){

}
