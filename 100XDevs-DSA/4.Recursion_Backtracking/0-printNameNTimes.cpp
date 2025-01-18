#include <iostream>
using namespace std;

void printName(int i, int n){

    if (i>n){
        return;
    }
    cout<<"smit"<<endl;
    printName(i+1,n);
}
int main(){

    printName(1,5);

}