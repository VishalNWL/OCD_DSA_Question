//Given a number x, reverse its binary form and return the answer in decimal.

//https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions

class Solution {
    public:
    
      long long reversedBits(long long x) {
         string binary=bitset<32>(x).to_string();
         long long n=0;
         int count=32;
         while(count--){
           if((binary[count]-'0')!=0){
              n+= pow(2,count)*(binary[count]-'0');
           }
         }
         
         return n;
      }
  };
  

  

//Approach: converting number into binary then store it into a string then starting using array operation and convert binary into again decimal format
//Time complexity: O(1)
//Space Complexity: O(1)