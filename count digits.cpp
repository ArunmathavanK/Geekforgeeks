#include<bits/stdc++.h> 
using namespace std;
class Solution{
public:
    int evenlyDivides(int N){
        int count=0,n=N;
        while(n>0){
            int rem=n%10;
            if(rem!=0 && N%rem==0){
                 count++;
             }
             n/=10;
        }
        
        return count;
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
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
