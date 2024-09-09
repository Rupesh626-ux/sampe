#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<vector<int>> maze = {
        {0, 1, 0, 0},
        {0, 0, 0, 1},
        {1, 0, 1, 0},
        {0, 0, 0, 0}
    };

    int n = maze.size(); 
    cout<<n<<endl; 
    
}
  