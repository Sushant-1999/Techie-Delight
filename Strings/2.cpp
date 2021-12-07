//Problem Statement

// Given a string in which remove the Occurence of 'A' and 'BC' from it 
// Return the outuput string after removal

// i/p : ABCCCABCCAB
// o/p : ' '

// Solution :
//     Here in one traversal we will take help of two pointers 
//     First of all if given character is 'C' then increment first pointer
//     If current char is 'B' and last character is 'A' then decrement last and increment first pointers
//     If none of this then copy first pointer character into last pointer and increment both the
//     Lastly return the substring from 0 to K.


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string removeChar(string temp) {
    int i = 0, k = 0;
    while(i < temp.size()) {
        if(temp[i] == 'B' && (k > 0 && temp[k-1] == 'A')) {
            k--;
            i++;
        }
        else if(temp[i] == 'C') {
            i++;
        }
        else {
            temp[k] = temp[i];
            k++;
            i++;
        }
    }
    return temp.substr(0,k);
}

int main() {
    string str, res;
    int i, j, temp;
    cin >> str;
    res = removeChar(str);
    cout << res << endl;
    return 0;
    
}