#include <iostream>
#include <queue> // Include the queue library

using namespace std;

int main() {
    queue<int> q; // Create a queue of integers

    // Enqueue operation: Add elements to the back of the queue
    cout << "Enqueue elements 10, 20, 30 into the queue.\n";
    q.push(10); // Enqueue 10
    q.push(20); // Enqueue 20
    q.push(30); // Enqueue 30

    // Display the front element of the queue
    cout << "Front element after enqueue: " << q.front() << endl; // Should be 10

    // Dequeue operation: Remove the front element from the queue
    cout << "Dequeue the front element (" << q.front() << ").\n";
    q.pop(); // Dequeue 10

    // Display the front element of the queue after one dequeue
    cout << "Front element after one dequeue: " << q.front() << endl; // Should be 20

    // Check if the queue is empty
    if (q.empty()) {
        cout << "The queue is empty.\n";
    } else {
        cout << "The queue is not empty.\n";
    }

    // Dequeue all remaining elements
    cout << "Dequeue all remaining elements.\n";
    while (!q.empty()) {
        cout << "Dequeuing: " << q.front() << endl;
        q.pop(); // Remove the front element
    }

    // Check if the queue is empty now
    if (q.empty()) {
        cout << "The queue is now empty.\n";
    } else {
        cout << "The queue is not empty.\n";
    }

    return 0;
}
