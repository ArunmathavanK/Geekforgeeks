#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> countOddEven(int arr[], int sizeof_array)
    {
        int countodd=0;
        int counteven=0;
        for(int i=0;i<sizeof_array;i++){
            if(arr[i]%2==0){
                counteven++;
            }
            else{
                countodd++;
            }
    }return {countodd,counteven};
    }
};
int main() {
	int testcase;
	cin >> testcase;
	while(testcase--){
	    int sizeof_array;
	    cin >> sizeof_array;
	    int arr[sizeof_array];
	    for(int i = 0; i < sizeof_array; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> res = ob.countOddEven(arr, sizeof_array);
	    for(auto t:res)
	    {
	        cout<<t<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
