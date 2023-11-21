#include<bits/stdc++.h>
using namespace std;
vector<int> ar[10001];
int vis[10001], dist[10001];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    dist[src] = 0;
    
    while(!q.empty()){
        int curr = q.front();
        q.pop();

        for(int child : ar[curr]){
            if(vis[child] == 0){
                q.push(child);
                dist[child] = dist[child] + 1;
                vis[child] = 1;
            }
        }
    }

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
    bfs(1);
}