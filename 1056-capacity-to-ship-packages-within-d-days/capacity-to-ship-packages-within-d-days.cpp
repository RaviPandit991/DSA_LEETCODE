class Solution {
public:
    bool helper(int mid, vector<int>&arr,int days){
        int n = arr.size();
        int m= mid;
        int count=1;
        for(int i=0;i<n;i++){
            if(m>=arr[i]){
                m-=arr[i];
            }else{
                count++;
                m=mid-arr[i];
            }
        }
        if(count<=days) return true;
        else return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int max=INT_MIN;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
            if(max<weights[i]) max=weights[i];
        }
        int lo=max;
        int hi = sum;
        int ans =0;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(helper(mid,weights,days)){
                ans=mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return ans;
    }
};