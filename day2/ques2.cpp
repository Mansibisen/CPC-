//You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.



class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        //code here
        map<int , int> m ;
        ll count =0;
        ll sum =0;
        for(int i =0 ; i < n ; i++){
            sum += arr[i];
            if (sum ==0 ){
                count++;
            }
            if(m.find(sum) != m.end()){
                count += m[sum];
                m[sum]++;
            }else{
                m[sum] = 1;
            }
            
        }
        return count;
    }
};