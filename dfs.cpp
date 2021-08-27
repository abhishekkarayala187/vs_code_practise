#include<bits/stdc++.h>
using namespace std;


class Graph{
    public:
        map<int, bool> visited;
        map<int, list<int>> adj;

        void addEdge(int V, int w);

        //destination source
        void DFS(int V);
};

void Graph::addEdge(int V, int w) {
    adj[V].push_back(w);
}

void Graph::DFS(int V){
    visited[V] = true;
    cout<<V<<" ";

    list<int>::iterator i;

    for(i = adj[V].begin(); i != adj[V].end(); ++i){
        if(!visited[*i]){
            DFS(*i);
        }
    }
}
    



int main(){
    Graph g;
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout<<" Following is Depth First Traversal"
        << "(starting from vertex 2) \n";
    g.DFS(2);
    return 0;
}