// Find the maximum product of two integers in an array
// int arr[] = {-10, -3, 5, 3, 6, 7, 3} 
// 1) Nested for Loop  O(n^2)
//         In this we will iterate over elements and for each pair we will maintain max_prod and 
//         two integers. Till the end will compare and last we will print max product and the pairs
//         Here, if prod == given_prod, then we will print the last prod with elements and current one.
        
//     2) Sorting Approach O(nlogn)
//         In this after sorting of the array, last two integers will have maximum product 

//     3) Optimized Approach O(n)
//         In the one iteration just find out the first_max and second_max element or First_min 
//         and second_min element in the array. Just compare both of them and print the max product and

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void FindMaxProduct(vector<int> arr, int size) {
    int i, max1, max2, min1, min2;
    max1 = arr[0]; max2 = INT_MIN; min1 = arr[0]; min2 = INT_MAX;
    for(i = 1; i < size; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        if(arr[i] > max2) {
            max2 = arr[i];
        }

        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        }

        if(arr[i] < min2) {
            min2 = arr[i];
        }


    }

    if((max1 * max2) > (min1 * min2)) {
        cout << "Max Product" << " : " << (max1 * max2) << endl;
    }
    else if((max1 * max2) == (min1 * min2)) {
        cout << "Max Product" << " : " << (max1 * max2) << endl;
    }
    else if((max1 * max2) < (min1 * min2)) {
        cout << "Max Product" << " : " << (min1 * min2) << endl;
    }

}

int main() {
    int i, j, n, temp, res;
    cin >> n;
    vector<int> arr;
    for(i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }

    FindMaxProduct(arr, n);
    return 0;

}