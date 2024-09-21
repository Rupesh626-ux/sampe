#include <iostream>
using namespace std;

void print(float amount,int Nstock,float Cstock, int have){
    string show;
    cout<<"Want to show: "<<endl;
    cin>>show;
    if(show=="show" || show=="SHOW" ){
            cout << "Cost of company: " << amount << endl;
            cout << "Number of Stocks: " << Nstock << endl;
            cout << "Cost of 1 Stock: " << Cstock << endl; 
        
    }
    cout << "Number of Stocks Owned: " << have <<endl;
}

void purchase(float& amount, int& Nstock, float& Cstock, int num) {
    amount += (num * Cstock);   
    Nstock -= num;      
    Cstock = amount / Nstock;    
}
void sell(float& amount, int& Nstock, float& Cstock, int num){
    amount -= (num * Cstock); 
    Nstock += num;
    Cstock = amount / Nstock; 
}

void again(float& amount, int& Nstock, float& Cstock, int& have) {
    char buy;
    cout << "Do you want to buy/sell ? (b/s): ";
    cin >> buy;
    
    if (buy == 'b' || buy == 'B') {
        cout << "How many stocks do you want to buy? ";
        int num; 
        cin >> num;
        if (num > Nstock) {
            cout << "Not enough stocks available." << endl;
        } else {
            have=have+num;
            purchase(amount, Nstock, Cstock, num);
            print(amount, Nstock, Cstock, have);
        }
    } else if (buy == 's' || buy == 'S') {
        cout << "How many stocks do you want to sell? ";
        int num; 
        cin >> num;
        if (num > have) {
            cout << "Not enough stocks to sell." << endl;
        } else {
            have=have-num;
            sell(amount, Nstock, Cstock, num); 
            print(amount, Nstock, Cstock, have);
        }
        
    } else {
        cout << "Invalid input." << endl;
    }
}

void call(float amount,int Nstock,float Cstock,int have){
    again(amount, Nstock, Cstock, have);
    call(amount, Nstock, Cstock, have);
}

int main() {
    float amount;
    int Nstock;
    int have=0;
    cout << "Enter amount: ";
    cin >> amount;
    cout << "Enter number of stocks: ";
    cin >> Nstock;
    float Cstock = amount / Nstock;
    cout << "Cost of 1 stock: " << Cstock << endl;
    call(amount, Nstock, Cstock, have);
    return 0;
}

#include <iostream>
#include <vector>
#include <queue>

using namespace std;
void BFS(int start, const vector<vector<int>>& adjList, vector<bool>& visited) {
    queue<int> q;
    queue<int> p;// Queue for BFS
    q.push(start); // Start from the given node
    visited[start] = true; // Mark the start node as visited

    while (!q.empty()) {
        int node = q.front(); // Get the front element in the queue
        q.pop();
        cout << node << " "; // Print the current node

        // Traverse all adjacent nodes
        for (int neighbor : adjList[node]) {
            if (!visited[neighbor]) {
                cout<<"Chala gaya neighbor: ";
                cout<<neighbor<<endl;// If the neighbor hasn't been visited
                visited[neighbor] = true;
                q.push(neighbor);// Add it to the queue for processing
            }
            else{
                cout<<endl;
                cout<<"Already visited Neighbour: "<<neighbor<<endl;
            }
        }
    }
    return;
}

int main() {
    int n = 5; // Number of nodes
    vector<vector<int>> adjList(n); // Adjacency list for the graph

    // Sample graph edges
    adjList[0] = {1, 2};
    adjList[1] = {0, 3, 4};
    adjList[2] = {0};
    adjList[3] = {1};
    adjList[4] = {1};

    vector<bool> visited(n, false); // Initialize all nodes as unvisited

    // Perform BFS starting from node 0
    BFS(0, adjList, visited);
    cout<<"Done"<<endl;
    return 0;
}