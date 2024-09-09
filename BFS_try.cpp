#include <iostream>
#include <queue>
#include <vector>
void BFS(int startNode, vector<vector<int>>& adjList, vector<bool>& visited){
    queue<int> q;
    visited[startNode]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbor: adjList[node]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }

}
int main(){
    int numnode=5;
    vector<vector<int>> adjList(numnode);
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0};
    adjList[3] = {1};
    adjList[4] = {1};  
    vector<bool> visited(numnodes, false);
    int startNode=0;
    cout<<"BFS traversal starting form node"<<startNode<<" is: "<<endl;
    BFS(startNode, visited, adjList);
}