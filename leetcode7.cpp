#include<iostream>
using namespace std ;

/*
int main() {
    int n;
    cin >> n;
    int sum = 0;
    
    if (n > 0){
        
        while (n != 0){
            
            if ((sum > INT32_MAX / 10 ) || (sum < INT32_MIN / 10)) {

                cout << 0 << endl;
            }
                
            int bit = n % 10;
            sum = sum * 10  + bit;
            n = n / 10;
            
        }


        cout << sum << endl;    
    
    }

    else if (n == 0) {
        sum = 0;

        cout << sum << endl;
    } 

    else {
        while (n != 0){
            
            if ((sum > INT32_MAX / 10 ) || (sum < INT32_MIN / 10)) {

                cout << 0 << endl;
            }
                
            int bit = n % 10;
            sum = sum * 10  + bit;
            n = n / 10;
            
        }

        cout << sum << endl;
    }
}
*/
// ------------------------------------------------------------------------------------------------------------------------------------------------------//

class Solution {
public:
    int reverse(int n) {
      int sum = 0;
    
    if (n > 0){
        
        while (n != 0){
            
            if ((sum > INT32_MAX / 10 ) || (sum < INT32_MIN / 10)) {

                return 0;
            }
                
            int bit = n % 10;
            sum = sum * 10  + bit;
            n = n / 10;
            
        }


        return sum;
    
    }

    else if (n == 0) {
        sum = 0;

        return sum;
    } 

    else {
        while (n != 0){
            
            if ((sum > INT32_MAX / 10 ) || (sum < INT32_MIN / 10)) {

                return 0;
            }
                
            int bit = n % 10;
            sum = sum * 10  + bit;
            n = n / 10;
            
        }

        return sum;
    }  
    }
};


//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

