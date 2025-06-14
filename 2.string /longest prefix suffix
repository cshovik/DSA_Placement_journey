//ques: https://www.geeksforgeeks.org/problems/longest-prefix-suffix2527/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
// 0, 1, 3, 4, 5,  6, 7, 8,  9, 10, 11, 12
// A, B, C, A, B , D, A, B , C , A ,B , D -> A: prefix, B: Suffix  
//A !=B, prefix A =0 index ; Lps[B]=0, suffix++ : C !=A, Lps[C]=0, suffix++ :A == prefix A-> prefix+1= 0+1= 1, prefix++, suffix++
//prefix: B suffix : B, lps[B]= prefix(index) +1 = 1+1= 2   Suffix ++, prefix++
//prefix: c , suffix : D, s[prefix]!=s[suffix] and prefx = 2 !=0 -> new prefix = lps[prefix-1] =lps[B]=2, go to 2nd index = C which is != suffix D, again in same process[pre -1] go to A, prefex of A=0 ,So Lps[D]=0
//0, 0, 0, 1, 2, 0......
class Solution {
  public:
    int longestPrefixSuffix(string &s) {
        // Your code goes here
        vector<int>longestPrefixSuffix(s.size(), 0);
        
        int prefix =0, suffix=1;
        
        while(suffix<s.size())
        {
            if(s[prefix]== s[suffix])
            {
                longestPrefixSuffix[suffix]= prefix+1;
                suffix++, prefix++;
                
            }else
            {
                if(prefix ==0)
                {
                    longestPrefixSuffix[suffix]=0;
                    suffix++;
                }else
                {
                    prefix =longestPrefixSuffix[prefix-1];
                }
            }
        }
        return longestPrefixSuffix[s.size()-1];
    }
};
