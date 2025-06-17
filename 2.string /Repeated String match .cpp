//Ques: https://leetcode.com/problems/repeated-string-match/description/
//ex: str a = abcd,  str b=abcdabcdab
//b.size()=10, , first store a in temp , then repeat a untill it will be less than 10 or equal , means 2 times repeat than 8 , if not match to b then repeat one times (temp+a), 
// if match return the no of repeat if not return 0 ,
// for matching use KMP method 

class Solution {
public:
    void lpsfind(vector<int>&longestPrefixSuffix,string &s) {

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
    }

    int KMP_MATCH(string haystack, string needle) {
        vector<int>longestPrefixSuffix(needle.size(),0);

        lpsfind(longestPrefixSuffix, needle);
        int first=0, second =0;

        while(first<haystack.size() && second < needle.size()){
            //match
            if(haystack[first] == needle[second])
            {
                first++;
                second++;
            }else//not match
            {
                if(second ==0)
                {
                    first++;
                }else{
                    second=  longestPrefixSuffix[second-1];
                }
            }     
       
        }
        if(second == needle.size()){
            return 1;
        }
    return 0;
        
    }    
    int repeatedStringMatch(string a, string b) {

        if (a==b)
        return 1;

        int rep =1;
        string temp= a;

        while(temp.size() < b.size()){
            temp+=a;
            rep ++;
        }

        //Kmp pattern search
        if(KMP_MATCH(temp,b)==1)
        return rep;

        //KMP not match
        if(KMP_MATCH(temp+a,b)==1)
        return rep +1;

    return -1;   
    }
};
