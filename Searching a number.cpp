#include<bits/stdc++.h>
using namespace std;
class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};
class Solution{
public:
	int search(int arr[], int n, int k) {
	    int i;
        for( i=0;i<n;i++){
	        if(arr[i]==k){
                return i+1;
            }
	    }
	    return -1;
	}
};
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int k;
        scanf("%d",&k);
        vector<int> arr(n);
        Array::input(arr,n);
        Solution obj;
        int res = obj.search(n, k, arr);
        cout<<res<<endl;
    }
}
