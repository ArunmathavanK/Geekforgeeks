#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int nthTermOfAP(int a1, int a2, int n) {
        int b=a2-a1;
        return a1+(n-1)*b;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, n;
        cin >> a1 >> a2 >> n;
        Solution ob;
        cout << ob.nthTermOfAP(a1, a2, n) << "\n";
    }
}
