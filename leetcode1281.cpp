#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int prod = 1;
    int sum = 0;

    while (n != 0) {
        int p1 = n % 10;
        prod = prod * p1 ;

        int s1 = n % 10;
        sum = sum + s1;

        n = n / 10;


    }

    cout << (prod - sum) << endl;

}
