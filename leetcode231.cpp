#include<iostream>
#include<math.h>
using namespace std;

/*
int main() {

    int n;
    cin >> n; 
    int sum = 0;
    for(int i = 0; i <= 30 ; i++) {
        int ans = pow(2, i);
        if (ans == n) {
            sum = sum + 1;
        }
        else {
            sum = sum ;
        }
    }
    if (sum > 0) {
        cout << true;
    }
    else {
        cout << false;
    }
}

*/
//------------------------------------------------------------------------------------------------------------------------------------//
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int sum = 0;
    for(int i = 0; i <= 30 ; i++) {
        int ans = pow(2, i);
        if (ans == n) {
            sum = sum + 1;
        }
        else {
            sum = sum ;
        }
    }
    if (sum > 0) {
        return true;
    }
    else {
        return false;
    }
    }
};

//---------------------------------------------------------------------------------------------------------------------------------------------//