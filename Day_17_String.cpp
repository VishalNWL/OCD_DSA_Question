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


  
