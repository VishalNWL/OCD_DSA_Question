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

// String to Intiger
class Solution {
public:
    int myAtoi(string s) {
        bool isnegative=false;
        long long int num=0;
        int i=0;

        while(i<s.length()&&s[i]==' '){
            i++;
        }

        if(i<s.length() && (s[i]=='-'|| s[i]=='+')){
            isnegative=(s[i]=='-');
            i++;
        }
        
        while(i<s.length() && isdigit(s[i])){
            if (num > (INT_MAX - (s[i]-'0')) / 10) { 
                return isnegative ? INT_MIN : INT_MAX;
            }
            num=num*10+(s[i]-'0');
            i++;
        }



       return isnegative?-1*num: num;
    }
};

Appraoch:Handle the edge cases carefully
Time compleixty: O(N)
Space compleixty:O(1)
