//Checking the anagram string
class Solution {
public:
    bool isAnagram(string s, string t) {
         sort(s.begin(),s.end());
         sort(t.begin(),t.end());
         return s==t;
    }
}; 
Approach:Just sort both the string then compare

Time Complexity:O(NlogN)
Space Complexity:O(1)

//Longest Common Prefix

  class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // Using iterative approach

        string ans = "";
        sort(strs.begin(),strs.end());
        string first=strs[0], end=strs[strs.size()-1];

        for(int i=0;i<min(first.length(),end.length());i++){
            if(first[i]!=end[i]){
                return ans;
            }
            ans.push_back(first[i]);
        }
        return ans;
    }
};

Approach:This step is necessary because the common prefix should be common to all the strings, so we need to find the common prefix of the first and last string in the sorted list.Iterate through the characters of the first and last string in the sorted list, stopping at the length of the shorter string.
If the current character of the first string is not equal to the current character of the last string, return the common prefix found so far.
Otherwise, append the current character to the ans string

Time Complexity:O(NlogN)
Space Coplexity:O(1)
