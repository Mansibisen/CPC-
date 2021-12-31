// Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t 
// (including duplicates) is included in the window. If there is no such substring, return the empty string "".

class Solution {
public:
    string minWindow(string s, string t) {
        map<char , int>target;
        for(int i =0 ; i < t.length() ; i++){
            target[t[i]] ++;
        }
        int i =0;
        map<char , int> main;
        int unique =0;
        int ans[3] ={-1 , 0 , 0};
        for(int j =0 ; j < s.length() ; j++){
            main[s[j]]++;
            if(target.find(s[j]) != target.end() && target[s[j]] == main[s[j]]){
                unique++;
            }
            
            while(i <= j && unique == target.size()){
                if(ans[0] == -1 ||j-i+1 < ans[0] ){
                    ans[0] = j-i+1;
                    ans[1] = i ;
                    ans[2] = j ;
                }
                main[s[i]]--;
                if(target.find(s[i]) != target.end() && target[s[i]] > main[s[i]]){
                    unique--;
                }
                i++;
                
            }
        }
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2];
        if( ans[0] == -1){
           return""; 
        }
       return s.substr( ans[1] , ans[0]);
        
    }
};