#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
class Solution
{
  public:
    vector<int> findIndex(int arr[], int n, int key)
    {
        int a=-1,b=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==key){
                a=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(arr[i]==key){
                b=i;
                break;
            }
        }
        return {a,b};
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    return 0;
}
