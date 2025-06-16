//same process like previos at first , second part
//haystack: a , b, c, d, a, a, b, c , e, a, a, b, c, first : a

//index:  0, 1, 2, 3, 4,5, 5, 7, 8, 9     
//needle: a, a, b, c, e, a, a, b, d, o second: a
//        0, 1 ,0, 0, 0, 1, 2, 3, 0, 0
// first == second, inc both , first =b , second = a, not equal , now go [second-1]=a also not eual to fist, nows second==0, first++
//first =c, second =a not eual like go on after d
//now first =a , second =a , so both inc , like this a, a, b
//now first :c , second: d, noww second-1 :3, second start from 3 index
// second: c, first =c , both same , inc both like this 
//retuern total number of first covered - total number of second coverd, ex haystack : sadfgert, needle : sad, when second=needle.size(), it is 3, and also fisrt coverd upto 3 so 3-3=0 ans
// means at 0 index sad start 
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

    int strStr(string haystack, string needle) {
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
            return first - second;
        }
         return -1;
        
    }    
};
