#include<bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    int multiplication(int A, int B){
        return A*B;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.multiplication(A,B) << endl;
    }
    return 0; 
} 
