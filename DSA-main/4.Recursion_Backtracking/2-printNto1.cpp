#include <iostream>
using namespace std;

void printNto1(int n,int i){
    
    if (i==0){
        return;
    }
    cout<<i<<endl;
    printNto1(n,i-1);

}
int main(){
    int n=10;
    printNto1(n,n);

}