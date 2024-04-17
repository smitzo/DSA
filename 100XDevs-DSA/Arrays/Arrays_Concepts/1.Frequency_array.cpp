/*
arr={1,2,3,1,3,1}
to store the occurence of elements of array arr,
we create a frequency array. (always initialise it with zeroes to avoid garbage values)

freq[0]=how many times 0 occurs in the array=0
freq[1]=how many times 1 occurs in the array=3
freq[2]=how many times 2 occurs in the array=1
freq[3]=how many times 3 occurs in the array=2
size of frequency array will be equal to highest
element of the array arr + 1;

--> Size of Frequency Array

say arr= {1,2,3,4,5,6,7,8,9}
then size of frequency array will be 10
freq[1-9] or freq[1], freq[2], ...freq[9]

--> Populating Frequency array

array elements of nums array are indices in the freq array
ex: nums={1,2,1,1,3,3}
iterate through all element of nums array and increase their freq using: 
freq[nums[i]]+=1
6 iterations                    
initially all elements of frq are initialised with zero 
i=0 nums[i]=1 -> freq[nums[i]]=freq[1]=0+1=1  (stored value +1)
i=1 nums[i]=2 -> freq[nums[i]]=freq[2]=0+1=1  (stored value +1)
i=2 nums[i]=1 -> freq[nums[i]]=freq[1]=1+1=2  (stored value +1)
i=3 nums[i]=1 -> freq[nums[i]]=freq[1]=2+1=3  (stored value +1)
i=4 nums[i]=3 -> freq[nums[i]]=freq[3]=0+1=1  (stored value +1)
i= 5 nums[i]=3 -> freq[nums[i]]=freq[3]=1+1=2  (stored value +1)

NOTE: if array size is too big ,it'll give memory limit exceeded error.
so use hashmaps in that case.
*/

int max_value=*(max_element(arr,arr+n));
int freq[max_value+1]={0};

for (inti =0;i<n;i++){
    freq[arr[i]]+=1;
}

/* for STRING s
 use ascii values :'A'=65, 'B'=66, ...
                     'a'=97, 'b'=98 ,...
                     '0'=48, '1'=49, ...

freq arr indexes would be 'a','b','c'...
we'll map a,b,c..z  with  0,1,2,3...25
'a'=97-97=0 'b'=98-97=1 'c'=99-97=2, 
i.e (int)(s[i]- int('a') or (int)(s[i])-97

Easy way: (int) (s[i]-'a') for small case alphabet
or (int) (S[i]-'A') for capital case
or (int) (s[i]-'o') for numbers
or (int) (256-s[i]) for 0-9,A-z,a-z,!@#$%^&* 

*/