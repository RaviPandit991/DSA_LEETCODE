class Solution {
public:
bool helper(int mid, int n, vector<int>& arr, int hours) {
    long long count = 0;

    for(int i = 0; i < n; i++) {
        count += (arr[i] + mid - 1) / mid;
    }

    return count <= hours;
}
    int minEatingSpeed(vector<int>& piles, int h) {
    int n=piles.size();
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<=piles[i]) max=piles[i];
    }
    int ans =0;
    int lo=1;
    int hi=max;
    while (lo<=hi)
    {
        int mid =lo+(hi-lo)/2;
        if(helper(mid,n,piles,h)){
            ans=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return ans;
    }
};