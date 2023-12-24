/**
 * you are given 2 no's n and k . find
 * the largest power of k x, such that
 * n! is divisible by k^x;
 * 
*/

#include<bits/stdc++.h>
using namespace std;
 
 // 1st method
// int f(int n, int k){
//     int count =0;    
//     for(int i=1; i<=n; i++){
//         if(i%k==0){
//          while( i%k==0){
//             cout<<i<<" ";
//              count ++;
//              i/=k;
//            }
//         }
//     }
//     cout<<count<<endl;
// }

// 2nd method

int f2(int n , int k){
    int count=0;
    while(n){
        count+=n/k;
        n/=k;
    }
    cout<<count<<endl;
}

int main(){

    f2(10,2);
    return 0;
}