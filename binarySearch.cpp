#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& ar, int t) {
        
        int st=0, e= ar.size()-1;
        while(st<=e){
            int mid = e - (e-st)/2;
            if(ar[mid]==t){
                return mid;
            }
            else if(ar[mid]<t){
                st=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
};