#include<bits/stdc++.h>
using namespace std;
vector<int> ar[10001];
int vis[10001];
int maxD, maxNode;

void dfs(int node, int d){
    vis[node]= 1;
    if(maxD<d){
        maxD = d;
        maxNode = node;
    }
    for(int child: ar[node]){
        if(vis[child] == 0){
            dfs(child, d+1);
        }
    };
}


int main(){
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }
    memset(vis,0,sizeof(vis));
    maxD = -1;
    dfs(1,0);
}