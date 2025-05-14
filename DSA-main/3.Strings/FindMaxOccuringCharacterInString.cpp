#include<bits/stdc++.h>
using namespace std;

char findMaxOccuringChar(string str){

    char maxchar=str[0];
    int maxFreq=0;
    unordered_map<char,int>freq;

    for (char x: str){
        freq[x]++;
        // cout<<freq[x]<<endl;
    }

    for (char x:str){
        if (freq[x]>maxFreq){
            maxchar=x;
            // cout<<maxchar<<endl;;
            maxFreq=freq[maxchar];
        }
    }

    return maxchar;

    
}
int main(){

    string str1="aabbccaaaaaaaaaabbbbbbbbbbbbbbbbbbbbbbbbb  ";
    char result=findMaxOccuringChar(str1);
    cout<<result<<endl;

}