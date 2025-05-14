#include<iostream>

using namespace std;

int linearSearch(int arr[], int size, int key){
    for (int i = 0; i<size ; i++){
        if (arr[i]==key){
             return i;
        }
    }
    return -1;
}
int main (){
    int arr1[] ={2,3,4,5,6,7};
    int size = sizeof(arr1)/sizeof(arr1[0]);
    int key = 6;
    int result = linearSearch(arr1, size, key);
    if (result != -1){
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}