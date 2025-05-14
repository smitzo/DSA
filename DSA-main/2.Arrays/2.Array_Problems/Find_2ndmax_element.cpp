#include <iostream>
using namespace std;

int findSecondMaxElement(int arr[], int n)
{
    int max1 = -1 ; // Initialize the two maximum numbers as -1 or INT_MIN .
    // find maximum element max1
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
    }
    // find 2nd max element max2

    int max2 = -1;
    for (int i = 0; i < n; i++)
    {
 
        if (arr[i] != max1 && arr[i] > max2)
        {
            max2 = arr[i];
        }

        /* or 
        if (arr[i] != max1)
        {
            max2 = max(max2, arr[i])
        }*/
    }

    return max2;
}

int main()
{
    int arr[] = {12, 10, 7, 2, 5, 55, 4, 78};
    cout << findSecondMaxElement(arr, 8) << endl;
}

int find secondMaxElement( arr[],size){

    int max1=-1;
    int max2=0;


    for (int i=0;i<size;i++){
        if (arr1[i]>max2){
            max2=arr[i];
        }
        max1=max(arr[i],max2);
    }

}


