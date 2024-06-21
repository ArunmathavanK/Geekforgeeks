#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int reverse=0;
		    int temp=n;
		    while(temp){
		        int rem=temp%10;
		        reverse=reverse*10+rem;
		        temp=temp/10;
 		    }
 		    return (reverse==n) ? "Yes": "No";
		}   
};
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}
