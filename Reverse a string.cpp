#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    string reverseWord(string str)
    {
        int start=0,end=str.length()-1;
        while(start<=end){
          swap(str[start],str[end]);
          start++;
          end--;
        }
        return str;}
};
int main() {
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


