#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string toLower(string s) {
        int len = s.size();
        for (int i = 0; i < len; i++) {
            if (isupper(s[i])) 
                s[i] = tolower(s[i]);
        }
        return s;
    }
};
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.toLower(s) << endl;
    }
    return 0;
}
