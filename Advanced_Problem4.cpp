// Counting Sundays within a Given Number of Days
// Problem: Given a number of days n , count how many Sundays occur 
// within those days, considering any start day of the month.

#include <iostream>
using namespace std;

// Function to count Sundays within 'n' days starting from 'startDay'
int countSundays(int n, int startDay) {
    int fullWeeks = n / 7; // Calculate the number of full weeks
    int remainingDays = n % 7; // Calculate remaining days after full weeks
    
    // Each full week contains exactly one Sunday
    int sundayCount = fullWeeks;

    // Check if there is an additional Sunday in the remaining days
    // The position of Sunday in the week is 1 (startDay = 1 means it's Sunday)
    for (int i = 0; i < remainingDays; i++) {
        // Determine the current day of the week for the remaining days
        int currentDay = (startDay + i - 1) % 7 + 1;
        if (currentDay == 1) { // If the current day is Sunday
            sundayCount++;
        }
    }

    return sundayCount;
}

int main() {
    int n, startDay;

    // Input the number of days and the starting day
    cout << "Enter the number of days: ";
    cin >> n;

    cout << "Enter the starting day of the week (1 for Sunday, 7 for Saturday): ";
    cin >> startDay;

    // Count and output the number of Sundays
    int result = countSundays(n, startDay);
    cout << "Number of Sundays: " << result << endl;

    return 0;
}
