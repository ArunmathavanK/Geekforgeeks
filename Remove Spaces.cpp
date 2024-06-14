#include<bits/stdc++.h>
using namespace std;
class Solution
{
  public:
    string modify (string s)
    {
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
            ans+=s[i];
            }
        }
        return ans;
    }
};
int main()
{
    int t;
    cin >> t;
    cin.ignore ();
    while (t--)
    {
        string s;
        getline (cin, s);
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
    return 0;
}
