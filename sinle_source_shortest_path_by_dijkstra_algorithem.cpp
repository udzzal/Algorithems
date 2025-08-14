#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>pii;

vector<int>dijkstra_algorithem(int n,vector<vector<pii>>&adj,int src){

    vector<int>dist(n,INT_MAX);
    priority_queue<pii,vector<pii>,greater<pii>>pq;

    dist[src]=0;
    pq.push({0,src});

    while(!pq.empty()){
        //change from: auto [d,u]=pq.top();
        int d=pq.top().first;
        int u=pq.top().second;
        pq.pop();

        if(d>dist[u]){
            continue;
        }
        //change from:for (auto [w,v]:adj[u]);
        for(int i=0;i<adj[u].size();i++){
            int w=adj[u][i].first;
            int v=adj[u][i].second;

            if(dist[u]+w <dist[v]){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    return dist;
}

int main(){
    int n,e;
    cout<<"enter the number of vertex :";
    cin>>n;
    cout<<"\nenter the number of edge :";
    cin>>e;

    vector<vector<pii>>adj(n);
    cout<<"enter edge in format of v e w\n";
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }
    int src;
    cout<<"enter the source :";
    cin>>src;

    vector<int>result=dijkstra_algorithem(n,adj,src);

     cout << "\nShortest distances from vertex " <<src<< ":" << endl;
    for (int i = 0; i<n; i++) {
        cout << "Vertex " << i << " -> Distance " << result[i] << endl;
    }

return 0;
}
