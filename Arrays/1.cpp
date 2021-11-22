// Find a Pair with a given sum in an Array. Should Return all the Pairs
// Given an unsorted integer array, find a pair with the given sum in it.
// input : arr[] = {1, 2, 5, 3, 100, 45, 78, 5}
//         sum = 10
// output : (5, 5)

// Approaches : 
//     1) Brute Force: O(n^2)
//         Having nested for loop in which search for 2nd number matchin with the sum 

//     2) Using Sorting Apporach:
            // First of all we need to sort the array 
            // After sorting of the array now we have all the numbers in ascending order.
            // Now we can use two pointer technique to find the pair.
            // We will maintain two pointers, one at the start and one at the end of the array.
            // Then we will move the pointer at the end of the array and check if the sum of the number at the end pointer and the number at the start pointer is equal to the given sum.
            // If it is equal then we will return the pair.
            // If the sum is greater than the given sum then we will move the start pointer to the next index.
            // If the sum is less than the given sum then we will move the end pointer to the previous index.  (This is because we are using two pointer technique)


#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main() {
    int i, j ,k, temp, sum, N;
    vector<int> arr;
    unordered_map<int, int> map;
    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    cin >> sum;

    for(i = 0; i < N; i++) {
        if(map.find(sum - arr[i]) != map.end()) {
            cout << "Pair Exits" << endl;
            cout << "(" << arr[i] << ", " << sum - arr[i] << ")" << endl;
        }
        else {
            map[arr[i]] = i;
        }
    }
    return 0;
}

