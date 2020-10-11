class Solution {
public:
    bool isValid(string s) {
        if(s.size() % 2 == 1 || s.size() == 0){
            return false; 
        } 
        stack<char> ST;
        for (int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                ST.push(s[i]); 
                continue; 
                // (())
            } // ()) 
            if(ST.empty()){
                return false; 
            }
            if(s[i] == ')'){
                if (ST.top() != '(')
                    return false; 
                ST.pop(); 
            }
            if(s[i] == ']'){
                if (ST.top() != '[')
                    return false; 
                ST.pop(); 
            }
            if(s[i] == '}'){
                if (ST.top() != '{')
                    return false; 
                ST.pop(); 
            }
        } // ( ( (
        if(!ST.empty())
            return false; 
        return true; 
    }
};