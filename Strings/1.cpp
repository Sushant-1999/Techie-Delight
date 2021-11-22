// Code to find whether to strings are anagram or not 
// input : str = "insect" ptr = "incest"
// output : true

// Approaches :

//     1) Sorting Approach O(nlogn)
//         Using sorting both the strings then can be compared and if they both are equal to 
//         each other then we can say that the two strings are anagram of each other.

//     2) Optimized O(n)
//         Hashing always try to give optimized solution. Here in this first of all we will insert 
//         character in a map with value as its count. Then for each charater for second string we 
//         will decrease its count and when count becomes zero we will erase it from the map. And 
//         at last when the map becomes empty we will then return true else false.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int i, j, temp = 1;
	string str1, str2;
    unordered_map<int, int> map;
    cin >> str1;
	cin >> str2;

    if(str1.size() != str2.size()) {
        cout << "Strings are not Equal, Hence not anagram\n";
        temp = 0;
    }
    else {
        for(i = 0; i < str1.size(); i++) {
            map[str1[i]]++;
        }
        // Here we have count for each character.

        for(i = 0; i < str2.size(); i++) {
            map[str2[i]]--;
        }

        for(i = 0; i < str1.size(); i++) {
            if(map[str1[i]] != 0) {
                cout << "Strings are not anagram of each other\n";
                temp = 0;
                break;
            }
        }

    }
    if(temp == 1) {
        cout << "Strings are anagram of each other" << endl;
    }
    return 0;

}