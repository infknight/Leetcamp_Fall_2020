class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() == 0){
            return ""; 
        }
        string res = ""; 
        for(int i = 0; i < s.size(); i++){
            string single = s_string(i, i, s); 
            if(single.size() > res.size()){
                res = single; 
            }
            string double_s = s_string(i, i + 1, s); 
            if(double_s.size() > res.size()){
                res = double_s; 
            }
        }
        return res; 
    }
    
    string s_string(int start, int end, string &s){
        while(start >= 0 && end < s.size()){
            if(s[start] != s[end]){
                start++;
                end--; 
                break; 
            }
            end++;
            start--; 
        }
        if(start < 0 || end >= s.size()){
            start++; 
            end--; 
        }
        return s.substr(start, end - start + 1); 
    }
};