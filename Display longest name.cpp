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
            cin >> A[i];
        }
    }
    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};
class Solution {
  public:
    string longest(int n, vector<string> &names) {
        string s;
        int a;
        int max=0;
        for(int i=0;i<n;i++)
        {
            a=names[i].length();
            if(max<a)
            {
                max=a;
                s=names[i];
            }
        }
        return s;
    }
};
int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<string> names(n);
        Array::input(names,n);
        
        Solution obj;
        string res = obj.longest(n, names);
        
        cout<<res<<"\n";
    }
}
