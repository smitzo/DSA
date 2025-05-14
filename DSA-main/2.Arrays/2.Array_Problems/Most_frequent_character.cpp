/*

*/

#include<iostream>
using namespace std;

/* use ascii values :'A'=65, 'B'=66, ...
                     'a'=97, 'b'=98 ,...
                     '0'=48, '1'=49, ...

freq arr indexes would be 'a','b','c'...
we'll map a,b,c..z  with  0,1,2,3...25
'a'=97-97=0 'b'=98-97=1 'c'=99-97=2, 
i.e (int)(s[i]- int('a') or (int)(s[i])-97

Easy way: (int) (s[i]-'a')
*/
string mostFreqChar(string s){

    int asciiArray[]=new int[26];
    for (int i=0;i<;i++){
        asciiArray[i]=(int)(s[i]-'a');
        cout<<asciiArray[i];
    }

    int freqArray[]=new int[26];
    for (int i=0;i<) 

}
int main (){

    str1="ssssmmitttittttttttt";
    mostFreqchar(str1);

}