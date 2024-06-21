#include<bits/stdc++.h> 
using namespace std; 
class Solution
{
public:
    vector<int> getTable(int N)
    {
        vector<int> a;
        for(int i=1;i<11;i++){
            int b=i*N;
            a.push_back(b);
        }
        return a;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> ans = ob.getTable(N);
        for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
