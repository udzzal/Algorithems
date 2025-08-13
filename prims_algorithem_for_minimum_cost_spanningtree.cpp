#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int>pii;

void prims_algorithem(int n,vector<vector<pii>>&adj){
        vector<bool>mst(n,false);
        priority_queue<pii,vector<pii>,greater<pii>>pq;
        int total_weight=0;
        pq.push({0,0});
        while(!pq.empty()){
                //this line has a compilier version type error old compilier cant understand
            //auto[weight,u]=pq.top();
            //write instant of this
            pii top=pq.top();
            int weight=top.first;
            int u=top.second;

            pq.pop();

            if(mst[u]){
                continue;
            }
            mst[u]=true;
            total_weight +=weight;

            cout<<"add vertex "<<u<<" with edge weight "<<weight <<endl;
            //same error here
            /*for(auto[w,v]:adj[u]){
                if(!mst[v]){
                    pq.push({w,v});
                }
            }*/
            for(pii edge:adj[u]){
                int w = edge.first;
                int v = edge.second;
                if(!mst[v]){
                    pq.push({w,v});
                }
            }

        }
        cout<<"total weight of mst: "<<total_weight<<endl;

}

int main(){

    int n,e;
    //input the number of vertex
    cin>>n;
    //input for number of edges;
    cin>>e;

    vector<vector<pii>>adj(n);
    cout<<"enter the input in format (u,v,weight)\n";
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }
    prims_algorithem(n,adj);


return 0;
}

