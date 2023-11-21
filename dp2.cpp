#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int t[1000];
    int dp(vector<int>ar,int n){
        
        if(n<1) return t[n]= 0;
        
        if(t[n]!=-1) return t[n];
        if(n==1) return ar[0];
        
        return t[n]=max(dp(ar,n-1),dp(ar,n-2)+ar[n-1]);
        
    }
    int rob(vector<int>& nums) {
        
        memset(t,-1,sizeof(t));
        int ans = dp(nums,nums.size());
        
        return ans;
    }
};