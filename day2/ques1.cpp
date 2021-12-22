//Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

class Solution {
public:
    vector<string>res;
    vector<string> generateParenthesis(int n) {
        string s ="";
        func(s , 0 , 0 , n);
        return res;
    }
    void func(string& s , int open , int close , int n){
        if(s.length() == 2*n){
            res.push_back(s);
            return;
        }
        if(open <n){
            s.push_back('(');
            func(s , open+1 , close , n);
            s.pop_back();
        }
        if(close < open){
            s.push_back(')');
            func(s , open , close+1 , n);
            s.pop_back();
        }
    }
};