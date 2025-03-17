// 12034509 -> 12345900
//EXplaination: Use two pointer approach
//120304507--> first j at pos 2, i start from nums[3], check i non zero if non zero swap with j ->123004507-> then j++ means at pos 3, and i start from nums[4]
//t.C: n (rotate 1 time) space complexity: o(1)
//optimized method
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();

        int j=-1; //Find first 0 and place j pomter in first 0
        for (int i=0; i<n; i++){
            if (nums[i]== 0)
            {
                j = i;
                break;
            }
        }

        if(j==-1 )return;

        for(int i= j+1; i<n; i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};

//brute force
vector<int> temp;
for (int i=0; i<n; i++){
  if(nums[i] != 0)
  {
    temp.push_back(a[i]); // place nonzero to temp
  }
}
int nz= temp.size();
for(int i=0; i<nz; i++)
{
    nums[i]=temp[i]; //place nonzero from temp to front of array
}

for(int i=nz; i<n; i++)
{
    nums[i]=0; // fill the remainning position to 0
}
