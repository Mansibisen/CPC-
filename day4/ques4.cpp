// You want to build an expression out of nums by adding one of the symbols '+' and '-' before each integer in nums and then concatenate all the integers.

// For example, if nums = [2, 1], you can add a '+' before 2 and a '-' before 1 and concatenate them to build the expression "+2-1".
// Return the number of different expressions that you can build, which evaluates to target.


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