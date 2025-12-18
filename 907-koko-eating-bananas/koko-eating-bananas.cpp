class Solution {
public:
    bool check(vector<int>&piles,int k,int h){
        long long ans=0;
        for(int i=0;i<piles.size();i++){
            ans+=ceil((double)piles[i]/k);
        }
        return ans<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(begin(piles), end(piles));
        int low = 1;
        int high = maxi;
        int ans = 0;
        while(low<=high){
            int mid = (low+high)/2;
            if(check(piles,mid,h)){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};