class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(b == 0)
        return a;
        
        
        return gcd(b, a%b);
    }
};
// gcd(18,48)
//->gcd(48, 18)// 18%48
//-> gcd(18, 12)
//-> gcd(12, 6)
//-> gcd(6, 0)
//return 6
