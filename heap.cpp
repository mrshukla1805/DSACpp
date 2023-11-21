#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& ar, int k) {
        // Priority queue ka implementation
        
        priority_queue<int,vector<int>,greater<int>> p;
        
        for(auto x:ar){
            p.push(x);
            
            if(p.size()>k){
                p.pop();
            }
        }
        int ans = p.top();
        return ans;    
    }
};