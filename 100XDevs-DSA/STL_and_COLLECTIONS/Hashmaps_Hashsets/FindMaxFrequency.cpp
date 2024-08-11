/* O(N*N) BRUTEFORCE

#include <bits/stdc++.h>
using namespace std;
class Map{
    public:
    int element;
    int frequency;
};

int findMaxFrequency(int arr[], int n){
    
    vector<Map> table;// Initialize an empty vector of Map objects

    for (int i = 0; i < n; i++){
        bool found = false;         // Initialize a flag to check if the current element is found in the table

        for (Map &record : table){    // Iterate over the table vector  
           
            if(record.element == arr[i]){    // If  current element is found in  table, increment its frequency and set the flag to true
                record.frequency++;
                found = true;
                break;
            }
        }

        if (!found){     // If current element is not found in  table, create a new Map object with the current element and a frequency of 1, and push it to the table vector
            table.push_back(Map{arr[i], 1});
        }
    }

    int maxFrequency = 0;

    
    for (Map record : table){   // Iterate over the table vector
        
        if (record.frequency > maxFrequency){      // If the frequency of a Map object is greater than the current maximum frequency, update the maximum frequency
            maxFrequency = record.frequency;
        }
    }

    return maxFrequency;
}

int main(){

    int arr[] = {2, 3, 5, 2, 1, 3, 2, 7, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMaxFrequency(arr, n) << endl;
    return 0;
}

*/
#include<bits/stdc++.h>
using namespace std;

int findMaxFreq(vector<int>nums){
    unordered_map<int,int>freq;

    for (auto i: nums){
        freq[i]++;
    }

    int maxFreq = 0;
    int maxFreqElement = 0;

    for (auto i:freq){
        if (i.second > maxFreq){
            maxFreq = i.second;
            maxFreqElement = i.first;
        }
    }

    return maxFreqElement;
}

int main(){
    vector<int>nums={2,3,5,2,1,3,2};
    int maxFreqElement = findMaxFreq(nums);
    cout << "The element with the maximum frequency is: " << maxFreqElement << endl;
    return 0;
}