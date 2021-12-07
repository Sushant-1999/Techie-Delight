// Problem : To check whether the given string is Palindrome or Not ?
// i/p : ABCBA
// o/p : 1 

// i/p : ABCDBA
// o/p : 0


// Solution : 
//     We will have two pointers at the begin and end of the string respectively.
//     Then we will check characters of the both pointers if equal will move else 
//     return false
//     At last will return true.


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int i, j, len;
    bool res = true;
    cin >> str;
    len = str.size();
    for(i = 0, j = len-1; i != j; i++, j--) {
        if(str[i] != str[j]) {
            res = false;
            break;
        }
    }
    cout << res << endl;
    return 0;

}
