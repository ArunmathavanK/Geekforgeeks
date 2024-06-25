#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
        sort(a,a+n);
        if(n-3>=0)
        return a[n-3];
        else
        return -1;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
} 
