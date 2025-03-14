#include<iostream>
#include<vector>
using namespace std;

void Dfs_traversal(int start,vector<vector<int>>&graph,vector<bool>&visit){
    cout<<start<<"--> ";
    visit[start]=true;

    for(int i:graph[start]){
        if(!visit[i]){
            Dfs_traversal(i,graph,visit);
        }
    }


}
int main(){
    int node,E;
    cout<<"Enter  the node : ";
    cin>>node;
    cout << "Enter the number of edges: ";
    cin >> E;

    vector<vector<int>>graph(node+1);
    cout << "Enter the edges (format: v w):" << endl;
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        //if graph is undirected then next line is to be comment 
        graph[v].push_back(u); 
    }
    vector<bool>visit(node,false);
    int start;
    cout<<"Enter the starting node: ";
    cin>>start;
    cout<<"Dfs graph traversal : ";
    Dfs_traversal(start,graph,visit);

return 0;
}