/*https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&difficulty%5B%5D=1&category%5B%5D=Arrays&sortBy=submissions
Given an unsorted array arr of size n of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers.
Your task is to complete the function findTwoElement() which takes the array of integers arr and n as parameters and returns an array of integers of size 2 denoting the answer (The first index contains B and second index contains A)

Examples

Input: n = 2 arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and smallest positive missing number is 1.

Input: n = 3 arr[] = {1, 3, 3} 
Output: 3 2
Explanation: Repeating number is 3 and smallest positive missing number is 2.
*/

class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        
        vector <int> result(2);
        unordered_map<int,int>freq;
        int repeating=arr[0];
        int missing=arr[0];
        
            for (int i=0 ; i<n;i++){
            
            freq[arr[i]]++;
            
        }
        
        
        for (int i=1;i<=n;i++){
            
            if (freq[i]==2)
            repeating=i;
            
            else if (freq[i]==0)
            missing=i;
        }
        

        result[0]=repeating;
        result[1]=missing;
        
        
        return result;
    }
};