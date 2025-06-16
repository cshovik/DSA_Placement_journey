//same longest prefix suffix method
//R O O R S P ->rev:S P R O O R
//new string with rev add: R O O R S P $ S P R O O R
//lps                      0 0 0 1 0 0 0 0 0 1 2 3 4 -> lps size 4 throgh KMP method
//return original size - lps size = 6-4= 2, means 2 min value have to add (SP) to make it palindrome

class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
        string rev = s;
        reverse(s.begin(), s.end());
        
        int size= s.size();
        
        s+= '$';
        s += rev;
        
        int n = s.size(); //new size after add rev
        
        vector<int> lps(n,0);//new string array start from 0
        
        int pre=0, suff=1;
        
        while(suff < n){
            
            //match
            if(s[pre] == s[suff])
            {
                lps[suff]= pre+1;
                suff++, pre++;
            }else{
                //not match
                if(pre==0){
                    lps[suff]=0;
                    suff++;
                }else{
                    pre= lps[pre-1];
                }
            }
            
        }
        return size-lps[n-1];
        
    }
};
