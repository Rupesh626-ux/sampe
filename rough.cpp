#include <iostream>
using namespace std;

int main() {
    // Original array with duplicate numbers
    int arr[] = {1, 2, 4, 2, 3, 5, 4, 1, 6, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    // Initialize an array to keep track of visited numbers
    bool isVisited[n] = {false};  // Assuming the numbers range from 0 to 100

    // Loop through each element in the array
    for (int i = 0; i < n; i++) {
        // If the number has not been visited yet
        if (!isVisited[arr[i]]) {
            cout << arr[i] << " ";  // Print the number
            isVisited[arr[i]] = true;  // Mark the number as visited
        }
    }

    return 0;
}
