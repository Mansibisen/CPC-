#include<bits/stdc++.h>
uisng namespace std;
class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i = 0;
	    int j = m-1;
	    int ans = -1;
	    bool flag ;
	    for (int i =0 ; i < n ; i++){
	        flag = false;
	        while(j >=0 && arr[i][j] == 1){
	            j--;
	            flag = true;
	        }
	        if( flag){
	            ans = i;
	        }
	    }
	    
	    return ans ;
	}

};