

class Solution{
    public:
 long long findMinDiff(vector<long long> a, long long n, long long m){
        
        if(n==0 ||m==0)return 0;   // TC:O(n)     SC:O(1)
        if(m>n) return -1;
        
        int min_diff = INT_MAX;
        sort(a.begin(),a.end());
        for(int i=0;i<n-m+1;i++){
            int diff = a[i+m-1] - a[i];
            min_diff = min(min_diff,diff);
        }
        return min_diff;
    
    }   
};
