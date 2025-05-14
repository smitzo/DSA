#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main (){
    string str="hello-world";
    int dashposition=str.find("-");
    cout<<"dashposition : "<<dashposition<<endl;
    string beforeDash=str.substr(0,dashposition);
    string afterDash=str.substr(dashposition+1);
    cout<<"before dash:"<< beforeDash<<endl;
    cout<<"after dash:"<< afterDash<<endl;


    return 0;
}   