#include<iostream>  // Include input-output stream
#include<algorithm> // Include algorithm for transform function
#include<string>    // Include string for string operations

using namespace std;

int main (){
    // Initializing two strings

    string s1;
    cout << "Type your string: ";
    getline (cin, s1);  //enter "hello-world"
    cout << "string s1: " << s1;

    
    string s2="smit-joshi";

    cout<<"s1+s2:"<<s1+s2<<endl;
    cout<<"s1.append(s2)"<<s1.append(s2)<<endl;

    // Accessing and printing the character at index 3 of s1
    cout << "s1.at(3): " << s1.at(3) << endl; // Outputs 'l'

    // Transforming s1 to uppercase
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << "s1 after transforming to uppercase: " << s1 << endl;

    // Transforming s1 back to lowercase
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << "s1 after transforming to lowercase: " << s1 << endl;

    // Printing the length of the string s1
    cout << "s1.length(): " << s1.length() << endl;

    // Printing the size of the string s1 (same as length in C++)
    cout << "s1.size(): " << s1.size() << endl;

    // find ()
    int dashposition=s2.find("-");
    cout<<"dashposition=s2.find("-"): "<<dashposition<<endl;

    string beforeDash=s2.substr(0,dashposition);
    cout<<"before dash: "<< beforeDash<<endl;

    string afterDash=s2.substr(dashposition+1);
    cout<<"after dash: "<< afterDash<<endl;

    return 0;
}
