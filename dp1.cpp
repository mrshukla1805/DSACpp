#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int dp[100];
    
    int rec(int i){
        if(i==1 || i==0)
            return 1;
        if(dp[i]!=-1) return dp[i];
        if(i<0)
            return 0;  
        return dp[i] = rec(i-1) + rec(i-2);           
    }
    
    
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        int ans = rec(n);
        
        return ans;
        
    }
};