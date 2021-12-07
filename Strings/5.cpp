// Problem : Reverse given string using Recursion
// i/p : Krishna
// o/p : anhsirK


#include <bits/stdc++.h>
using namespace std;

void Reverse(string str, int temp) {
    if(temp == str.size()) {
        return;
    }
    Reverse(str, temp+1);
    cout << str[temp];

}

int main() {
    string str;
    cin >> str;

    Reverse(str, 0);
    return 0;

}
