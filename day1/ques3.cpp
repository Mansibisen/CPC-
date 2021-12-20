#include <bits/stdc++.h>
uisng namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-1;
        int index =-1 ;
        int index2 ;
        int j ;
        while(i >=0){
            if( i != n-1 && nums[i+1]>nums[i]){
                index =i ;
                j = index;
                //cout<<index<<"\n";
                while(j < n ){
                     if(nums[j] > nums[index]){
                         index2 = j ;
                     }
                    j++;
                }
                //cout<<index2<<"\n";
                swap(nums[index] , nums[index2]);
                reverse(nums.begin()+index+1 , nums.end());
                return ;
                
            }
            i--;
        }
        if(index == -1){
            sort(nums.begin() , nums.end());
        }
        
    }
};