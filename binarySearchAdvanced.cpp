#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    bool sol(vector<int> ar, int d,int w){
        int c=1;
        int s=0;
        for(int i=0;i<ar.size();i++){
            if(ar[i]>w) return false;
            s+=ar[i];
            if(s>w){
                c++;
                s=0;
                i--;
            }
        }
        
        return c<=d;
    }
    
    int shipWithinDays(vector<int>& ar, int d) {
        /*
        Least no of days 
        And the given array is sorted 
        So the 
        N N N N N N N N N N N N  Y Y Y Y Y Y Y Y
        is being followed we have find the min Y
        */
        int s = 1,e=accumulate(ar.begin(),ar.end(),0);
        int ans = e;
        while(s<=e){
            int mid = e - (e-s)/2;
            if(sol(ar,d,mid)){
                ans = mid;
                e = mid-1;
            }
            else{
                s= mid+1;
            }
            
        }
        
        return ans;
    }
};