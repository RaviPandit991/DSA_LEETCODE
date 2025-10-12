class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> v;
        int minr=0,minc=0;
        int maxr=n-1,maxc=m-1;
        while(minr<=maxr && minc<=maxc){
            if(minr<=maxr && minc<=maxc){
                for(int i=minc;i<=maxc;i++){
                    v.push_back(matrix[minr][i]);
                }
                minr++;
            }
            if(minr<=maxr && minc<=maxc){
                for(int j=minr;j<=maxr;j++){
                    v.push_back(matrix[j][maxc]);
                }
                maxc--;
            }
            if(minr<=maxr && minc<=maxc){
                for(int k=maxc;k>=minc;k--){
                    v.push_back(matrix[maxr][k]);
                }
                maxr--;
            }
            if(minr<=maxr && minc<=maxc){
                for(int l=maxr;l>=minr;l--){
                    v.push_back(matrix[l][minc]);
                }
                minc++;
            }
        }
        return v;
    }
};