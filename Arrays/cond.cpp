#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    if(n % 2 == 1) {
        cout << "Wierd" << endl;
    }
    else if((n % 2) == 0 && n >= 2 && n <= 5) {
        cout << "Not Wierd" << endl;
    }
    else if((n % 2) == 0 && n >= 6 && n <= 20) {
        cout << "Wierd" << endl;
    }
    else if((n % 2) == 0 && n > 20) {
        cout << "Not Wierd" << endl;
    }
    return 0;
    
}