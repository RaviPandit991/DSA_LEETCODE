class Solution {
public:
    void sortColors(vector<int>& nums) {
    int no0=0;
    int no1=0;
    int no2=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            no0++;
        } else if (nums[i]==1){
            no1++;
        }else{
            no2++;
        }
    }
        for(int i=0;i<nums.size();i++){
            if(i<no0){
                nums[i]=0;
            } else if(i<no0+no1){
                nums[i]=1;
            }else{
                nums[i]=2;
            }
        }
    }
};