#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        if(B<A && C<A){
            return A; 
        }
        if(A<B && C<B){
            return B;
        }
        if(A<C && B<C){
            return C;
        }
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    }
}
