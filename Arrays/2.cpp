// Program to sort the binary array having 1's and 0's randomly ordered
// Author: Sushant Agawane
// Date: 22/11/2021
// Input : arr[] = {1,0,0,0,1,0,1}
// Output : arr[] = {0,0,0,0,1,1,1}

#include <iostream>
#include <bits/stdc++.h>
int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;
    int arr[n];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int k = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            arr[k++] = 0;
        }
    }
    
    for(int i = k; i < n; i++) {
        arr[i] = 1;
    }

    std::cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}