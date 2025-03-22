//Sort using max frequency
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++){
            if(mp.contains(s[i])){
                mp[s[i]]++;
            }
            else{
                mp[s[i]]=1;
            }
        }

       priority_queue<pair<int ,char>>pq;
        for(auto i:mp){
            int fq=i.second;
            char ch=i.first;
           
           pq.push(make_pair(fq,ch));
        }

      s="";
      while(!pq.empty()){
         
         for(int j=0;j<pq.top().first;j++){
            s.push_back(pq.top().second);
         }
         pq.pop();
      }
      return s;
    }
};

Approach:using hash map to store the frequency and the using max heap so that maxfreq element occur at the top so we can print them
Time and Space complexity: O(N)
