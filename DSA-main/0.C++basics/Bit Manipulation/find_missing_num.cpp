//given an array all numbers appear twice except for 1 number find that number x



#include <bits/stdc++.h>
int arr={1,1,2,2,3,3,4,4,5};
int result=arr[0];

for (int i: arr){

    result^arr[i];
}
return result;