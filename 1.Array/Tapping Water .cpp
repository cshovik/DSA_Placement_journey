//First find maximum height of the building , so for left we don't care right bcz right is mx height and for rightg side . left is max height 
//4 , 2,  6 , 2, 3 => max heihjt= 6, index =4
//left ->0 t0 3= arr[0]-> leftmax=0, height =4 , lft<ht -> leftmax= 4-> no water store
//                arr[1]-> leftmax= 4 , height = 2, lft>ht-> water = 4-2= 2 saves
//right->6 to 5->arr[6]-> rightmost =0, height =3, right<ht-> rightmost =3-> no water saved
//              ->arr[5]-> rightmost=3 height =2, rgt>ht -> water =2+(3-2)= 3   total water 

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int leftmax= 0 , rightmax=0 , maxheight= height[0], index=0;
        int water=0;
        //max height building
        for(int i=1; i<n; i++){
            if(maxheight<height[i])
            {
                maxheight= height[i];
                index=i;
            }
        }

        //left part
        for(int i=0; i<index; i++)
        {
            if(leftmax>height[i]){
                water += leftmax- height[i];
            }else{
                leftmax= height[i];
            }
        }

        //right part
        for(int i=n-1; i>index; i--)
        {
            if(rightmax>height[i]){
                water += rightmax- height[i];
            }else{
                rightmax= height[i];
            }
        }
        
        return water;

    }
};
