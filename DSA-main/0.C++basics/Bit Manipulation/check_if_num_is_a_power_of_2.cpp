//check if a number is power of 2 without using division operator

// while(n%2==0){
//     n/=2;
//     if (n==1){
//         return true;
//     }
//     else
//      return false;
// }
           n    n-1
2^0  1   0001   0000
2^1  2   0010   0001
2^2  4   0100   0011
2^3  8   1000   0111

whenever n id a power of 2 , [n & (n-1 )]==0