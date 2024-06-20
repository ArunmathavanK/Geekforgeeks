#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int sumOfDigits(int N){
        int sum=0;
        while(N>0){
            int last=N%10;
            sum=sum+last;
            N/=10;
        }
        return sum;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.sumOfDigits(N) << endl;
    }
    return 0; 
}
