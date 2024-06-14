#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
        vector <int> count (string s)
        {
            vector<int>v(4);
            int uppercasecount=0;
            int lowercasecount=0;
            int numericcount=0;
            int specialcount=0;
            int len = s.size();
            for(int i=0; i<len; i++){
                if(s[i]>='A'&& s[i]<='Z')
                    uppercasecount++;
                else if(s[i]>='a' && s[i]<='z')
                    lowercasecount++;
                else if(s[i]>='0' && s[i]<='9')
                    numericcount++;
                else
                    specialcount++;
            }
            v[0] = uppercasecount;
            v[1] = lowercasecount;
            v[2] = numericcount;
            v[3] = specialcount;
            return v;
        }
};
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}
