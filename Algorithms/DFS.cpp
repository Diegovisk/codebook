#include <bits/stdc++.h>
#define MAXN 2147483647
using namespace std;

// Globals
int seen[MAXN]; // Helper array;
vector<int> adj[MAXN]; // Our ADJ list;

// Basic DFS; Accepts graph node;
void BasicDFS(int u){
    seen[u] = 1;
    for(int v: adj[u]){
        if(seen[v] == 0){
            BasicDFS(v);
        }
    }
} // This function visits all nodes in a graph or tree.

// Deepest dist. from one node
int DeepestDistanceDFS(int u){
    seen[u] = 1;
    int distance = 0;
    for(int v: adj[u]){
        if(seen[v] == 0){
            distance = max(distance,DeepestDistanceDFS(v) + 1);
        }
    }
    return distance;
} // This one returns the deepest path from a certain node to the rest of the tree ONLY FOR: TREE, DIRECTED GRAPH

