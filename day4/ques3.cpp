//Given a string containing digits from 2-9 inclusive,
// return all possible letter combinations that the number could represent. Return the answer in any order.

class Solution {
public:
    vector<string>res;
    map< char , string>phone;
    
    void fillmap(){
         phone['2'] = "abc";
         phone['3'] = "def";
         phone['4'] = "ghi";
         phone['5'] = "jkl";
         phone['6'] = "mno";
         phone['7'] = "pqrs";
         phone['8'] = "tuv";
         phone['9'] ="wxyz";
    }
    string s ;
    vector<string> letterCombinations(string digits) {
        
        fillmap();
        func(  0  , digits);
        
        
        return res;
    }
    void func( int i  , string& digits ){
        // base case 
        
        if ( digits.size()>0&& i >=digits.length() && s.length() == digits.length()){
            res.push_back(s);
            
            return;
        }
     while(i < digits.size()){
       for(char c : phone[digits[i]]){
           s.push_back(c);
           func( i+1 , digits );
           s.pop_back();
       }
         i++;
     }
    }
};

