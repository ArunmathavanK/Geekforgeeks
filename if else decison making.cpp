#include<bits/stdc++.h> 
using namespace std; 
class Solution{   
public:
    string compareFive(int n){
        if(n<5)
        return "Less than 5";
        else if(n>5)
        return "Greater than 5";
        else
        return "Equal to 5";
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.compareFive(N) << endl;
    }
    return 0; 
} 
