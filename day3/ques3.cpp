
#include <bits/stdc++.h>
using namespace std;
//Given an array A of N integers. Your task is to write a program to find the maximum value of ∑arr[i]*i, where i = 0, 1, 2,…., n – 1.
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a , a+n);
        int  sum =0;
        for(int i =0 ; i < n ; i++){
            sum += (a[i]*i);
            sum =sum %1000000007;
            
        }
        return sum ;
        
    }
};