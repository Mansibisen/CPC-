// There are n stairs, a person standing at the bottom wants to reach the top. 
// The person can climb either 1 stair or 2 stairs at a time. 
// Count the number of ways, the person can reach the top (order does matter).

class Solution {
public:
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int ans =0;
        
        func(nums , 0 ,0 , target , ans);
        return ans;
    }
    void func(vector<int>&nums , int sum ,int i ,  int target , int& ans){
        if( i == nums.size()){
            if(sum == target){
                ans++;
            }
        }else{
            
            func(nums , sum +nums[i] , i+1 ,target , ans);
            func(nums , sum -nums[i] , i+1 , target , ans );
        }
    }
        
};