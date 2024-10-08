#include<iostream>
using namespace std;

/*
int main () {
    int n;
    cin >> n;
    int m = n;
    int mask = 0;

    if (n == 0) {
        cout << 1;
    }

    else {
        while (m != 0) {
            mask = (mask << 1) | 1;
            m  = m >> 1;

        }

        int ans = (~n) & mask ;
        cout << ans << endl;
    }

}
*/

class Solution {
public:
    int bitwiseComplement(int n) {
    int mask = 0;
    int m = n; 

    if (n == 0) {
        return 1;
    }

        while (m != 0) {
            mask = (mask << 1) | 1;
            m = m >> 1;

        }

        int ans = (~n) & mask ;
        return ans ;
    }
};

//-----------------------------------------------------------------------------------------------------------------------------------------------------//