#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	void immediateSmaller(vector<int>&arr, int n) {
	    for(int i=0;i<n;i++){
	        if(arr[i]>arr[i+1]){
	            arr[i]=arr[i+1];
	        }
	        else{
	            arr[i]=-1;
	    }
	}
	arr[n-1]=-1;
}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.immediateSmaller(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
