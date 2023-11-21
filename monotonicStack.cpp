#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        unordered_map<int, int> m;
        vector<int> v;
        for(int i = nums2.size()-1; i >= 0; i--){
            if(s.empty()){
                s.push(nums2[i]);
                m[nums2[i]] = -1;
            }else if(s.top() > nums2[i] && !s.empty()){
                m[nums2[i]] = s.top();
                s.push(nums2[i]);
            }else if(!s.empty()){
                while(!s.empty() && s.top() < nums2[i]){
                    s.pop();
                }
                if(s.empty()){
                    m[nums2[i]] = -1;
                    s.push(nums2[i]);
                }else{
                    m[nums2[i]] = s.top();
                    s.push(nums2[i]);
                }
            }
        }
        
        for(int z : nums1){
            auto it = m.find(z); 
            if(it == m.end()){
                v.push_back(-1);
            }else{
                v.push_back(it->second);
            }
        }
        return v;
    }
};