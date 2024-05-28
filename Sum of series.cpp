#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	long long seriesSum(unsigned long long n){
	    unsigned long long sum=0;
	    sum=(n*(n+1))/2;
	    return sum;
	    }
};
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        Solution obj;
        long long res = obj.seriesSum(n);
        cout<<res<<endl;
    }
}
