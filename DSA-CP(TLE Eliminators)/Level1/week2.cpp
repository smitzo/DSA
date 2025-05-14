// Source: https://usaco.guide/general/io

// #include <bits/stdc++.h>
using namespace std;

int main() {

    //int arr[5]; //stores garbage values because uninitialised
    int arr[5] = {10,20,30,40,50}; // arr is of same data type always in cpp(int in this case) . 
    //arrays are orderd and order cant be changed
    //arrays have fixed size not changeable 
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
    cout<<arr[4]<<endl;
    // cout<<arr[5]<<endl; // error out of index
    for (int i=0;i<arr.size();i++){
        cout<<arr[i];
    }  


    vector<int>vec(5,0);

    vector<int> v; // vector is dynamic array, size can be changed, can store different data types size=0
    v.push_back(10); // push_back adds element to the end of the vector 
    v.push_back(20); // push_back adds element to the end of the vector
    v.push_back(30); // push_back adds element to the end of the vector
    for(int i=0;i<v.size();i++){
        cout<<"index: "i<<"value: "<<v[i]<<endl; // prints the elements of the vector
    }
    cout<<v.size()<<endl; // prints the size of the vector
    cout<<v.capacity()<<endl; // prints the capacity of the vector

} 
 