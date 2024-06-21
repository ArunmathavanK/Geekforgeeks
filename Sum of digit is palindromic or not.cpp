#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        int a,sum=0,rem,rema,rev=0;
        while(n!=0){
            rem=n%10;
            sum =sum+rem;
            n/=10;
        }
        a=sum;
        while(a!=0){
            rema=a%10;
            rev=rev*10+rema;
            a/=10;
        }
        if(sum==rev)
        return 1;
        else
        return 0;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
