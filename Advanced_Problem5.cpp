// Detect Loop in a Linked List
// Problem: Check whether a linked list contains a loop.
// Test Case:
// Input: Linked List: 1 -> 2 -> 3 -> 4 -> 2 (loop back)
// Output: True

#include <iostream>
using namespace std;

// Define a node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to detect loop in a linked list using Floyd’s Cycle Detection Algorithm
bool detectLoop(Node* head) {
    Node *slow = head, *fast = head;
    
    while (slow != nullptr && fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         // Move slow pointer one step
        fast = fast->next->next;   // Move fast pointer two steps
        
        // If slow and fast meet at the same node, there is a loop
        if (slow == fast) {
            return true;
        }
    }
    
    return false;  // No loop detected
}

// Helper function to create a new node
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = nullptr;
    return node;
}

int main() {
    // Create nodes of the linked list
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    // Create a loop for testing: 5 -> 3 (creates a loop back)
    head->next->next->next->next->next = head->next->next;
    
    // Detect if there is a loop
    if (detectLoop(head)) {
        cout << "Loop detected!" << endl;
    } else {
        cout << "No loop detected." << endl;
    }

    return 0;
}
