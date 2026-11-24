class Solution {
public:
    bool helper(long long mid ,vector<int>& time, long long totalTrips){
        long long n = time.size();
        long long ans =0;
        for(int i=0;i<n;i++){
            ans+=mid/time[i];
        }
        if(ans>=totalTrips) return true;
        else return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long n = time.size();
        long long max = -1;
        for(int i=0;i<n;i++){
            if(max<=time[i]) max = time[i];
        }
        long long ans=0;
        long long lo = 0;
        long long hi = max*totalTrips;
        while(lo<=hi){
            long long mid = lo+(hi-lo)/2;
            if(helper(mid,time,totalTrips)){
                ans = mid;
                hi=mid-1;
            }else{
                lo=mid+1;
            }
        }
        return ans;
    }
};