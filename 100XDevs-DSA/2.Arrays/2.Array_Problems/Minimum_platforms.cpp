/* https://www.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station 
so that no train is kept waiting. Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time
can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time,
same platform can not be used  for both departure of a train and arrival of another train. In such cases, we need different platforms.

Input: n = 6  arr[] = {0900, 0940, 0950, 1100, 1500, 1800} dep[] = {0910, 1200, 1120, 1130, 1900, 2000} Output: 3
Explanation: 
Minimum 3 platforms are required to safely arrive and depart all trains.

Input: n = 3 arr[] = {0900, 1100, 1235} dep[] = {1000, 1200, 1240} Output: 1
Explanation: Only 1 platform is required to safely manage the arrival and departure  of all trains. 

Your Task:
complete the function findPlatform() which takes the array arr[] (denoting the arrival times), array dep[] (denoting the departure times) and 
the size of the array as inputs and returns the minimum number of platforms required at the railway station such that no train waits.

Note: Time intervals are in the 24-hour format(HHMM) , where the first two characters represent hour (between 00 to 23 ) and the last two characters represent minutes (this will be <= 59 and >= 0).

Expected Time Complexity: O(nLogn)
Expected Auxiliary Space: O(n)

Constraints:
1 ≤ n ≤ 50000
0000 ≤ A[i] ≤ D[i] ≤ 2359
*/
#include <iostream>
using namespace std;
// maximum nuber of ranges intersection problem
int main (){    //

for (int i=0;i)

}