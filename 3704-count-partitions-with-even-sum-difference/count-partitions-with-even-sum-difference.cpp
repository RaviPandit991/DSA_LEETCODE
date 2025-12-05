class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
        int sum = 0,count = 0, sum2=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n-1;i++){
            sum2+=nums[i]*2;
            if((sum-sum2)%2==0){
                count++;
            }
        }
        return count;
    }
};