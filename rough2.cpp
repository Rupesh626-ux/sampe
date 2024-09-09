#include <iostream>
#include <stack>
using namespace std;
int manage(int* s, int arr[], int n, int i){
    if(s.top()>arr[i]){
        s.pop();
        manage(s, arr, n, i);
    }
    s.push(arr[i]);
    cout<<s.top()<<endl;
    return s;
}
int main(){
    stack<int> s;
    s.push(0);
    int arr[]={1,2,3,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    bool isVisited[n]={false};
    for(int i=0; i<n; i++){
        if(!isVisited[arr[i]]){
            manage(s, arr, n, i);
            isVisited[arr[i]]=true;
        }
    }
}
