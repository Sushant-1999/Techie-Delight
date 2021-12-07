// Problem : Remove adjacent Duplicates from String Repeatedly
// i/p : ABBACA
// o/p : CA

// Solution :
//     Approach is to use Stack Data Structure to achieve repeatedly removing duplicates.
//     If not repeatedly then just simply use iterator in string And Erase the character if 
//     it is equal to the previous character and return the remaining string.
    

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int i, j;
    stack<char> St;
    char temp;
    cin >> str;
    St.push(str[0]);
    for(i = 1; i < str.size(); i++) {
        if(!St.empty()) {
            temp = St.top();
        }
        if(temp != str[i]) {
            St.push(str[i]);
        }
        if(temp == str[i] ) {
            St.pop();
        }
    }
    //Now the contents of stack is the answer.
      while (!St.empty()) {
        cout << ' ' << St.top();
        St.pop();
    }
}
    