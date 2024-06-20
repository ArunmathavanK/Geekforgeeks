#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int gcd(int a, int b) {
        while(a>0){
            int rem=b%a;
            b=a;
            a=rem;
        }
        return b;
    }
};
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        int a;
        scanf("%d",&a);
        int b;
        scanf("%d",&b);
        Solution obj;
        int res = obj.gcd(a, b);
        cout<<res<<endl;
    }
}
