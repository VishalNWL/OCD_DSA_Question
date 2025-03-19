//Isomorphic String -->leetcode

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>st;
        unordered_map<char,char>st1;
        int i=0;

        if(s.length()!=t.length()){
           return false;
        }
        while(i<s.length()){
            if(st.contains(s[i])){
                if(st[s[i]]!=t[i]){
                    return false;
                }
            }
            else if(st1.contains(t[i])){
                   return false;
            }
            else {
                st[s[i]]=t[i];
                st1[t[i]]=s[i];
            }
            i++;
        }

        return true;
    }
};
Approach:By using Hashmap the corresponding characters are maped together so that we can check when they appear later in string
Time complexity:O(N)
Space compleixty:O(N)


// Remove Outermost Parentheses -->Leetcode

    class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int sum=0;
        if(s.length()==0){return "";}

        for(int i=1;i<s.length()-1;i++){
           if(s[i]=='('){sum+=1;}
           if(s[i]==')'){sum-=1;}
           if(sum<0){
             i++;
             sum=0;
             continue;
           }
           ans.push_back(s[i]);
        }
        return ans;
    }
};

Approach:start from index 1 then moved to other index by counting ( as +1 and ) as -1 if any point sum is -ve then we skip two iteration )( and aslo reseting sum=0
Time complexity: O(N)
Space complexity: O(N);
  
