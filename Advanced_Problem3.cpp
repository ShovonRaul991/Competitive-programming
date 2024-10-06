// Calculate Shipping Cost
// Problem: Calculate the total shipping cost based on the package's 
// weight and the distance it needs to travel.
// Test Case:
// Input: weight = 10kg, distance = 100km
// Output: $15

#include <iostream>
using namespace std;

// Function to calculate the cost based on weight
int calculateWeightCost(int weight) {
    if (weight <= 5) {
        return 5;
    } else if (weight <= 20) {
        return 10;
    } else {
        return 15;
    }
}

// Function to calculate the cost based on distance
int calculateDistanceCost(int distance) {
    if (distance <= 100) {
        return 5;
    } else if (distance <= 500) {
        return 10;
    } else {
        return 15;
    }
}

// Function to calculate the total shipping cost
int calculateShippingCost(int weight, int distance) {
    int weightCost = calculateWeightCost(weight);
    int distanceCost = calculateDistanceCost(distance);
    return weightCost + distanceCost;
}

int main() {
    int weight, distance;
    
    // Input from user
    cout << "Enter package weight (in kg): ";
    cin >> weight;
    
    cout << "Enter shipping distance (in km): ";
    cin >> distance;
    
    // Calculate total shipping cost
    int totalCost = calculateShippingCost(weight, distance);
    
    // Output the result
    cout << "Total Shipping Cost: $" << totalCost << endl;
    
    return 0;
}
