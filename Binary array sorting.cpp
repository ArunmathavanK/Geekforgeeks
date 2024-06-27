#include <bits/stdc++.h>
using namespace std;
class Solution{
  public:
    void binSort(int a[], int n)
    {
        int count0 = 0;
        int count1 = 0;
        for(int i = 0;i<n;i++){
            if(a[i]==0)
            count0++;
            else
            count1++;
        }
        for(int i = 0;i<count0;i++)
        a[i]=0;
        for(int i = count0;i<n;i++)
        a[i] = 1;
    }};
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N;
	    cin>>N;
        int A[N]; 
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	    Solution obj;
	    obj.binSort(A,N);
	    for(int x:A)
	    cout<<x<<" ";
	    cout<<endl;
	}
	return 0;
}
