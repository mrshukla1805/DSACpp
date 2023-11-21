#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    
    void rec(vector<int> ar,vector<int> v,vector<int> vis){
        int n = ar.size();
        int n2 = v.size();
        if(n==n2){
            ans.push_back(v);
            return;
        }
        
        for(int i=0;i<ar.size();i++){
            if(vis[i]==0){
                v.push_back(ar[i]);
                vis[i]=1;
                rec(ar,v,vis);
                v.pop_back();
                vis[i]=0;
            }
            
        }
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        /*
        recursion and backtracking
        */
        vector<int> v;
        vector<int> vis(nums.size());
        for(int i=0;i<nums.size();i++) vis[i]=0;
        rec(nums,v,vis);
        return ans;
        
    }
};