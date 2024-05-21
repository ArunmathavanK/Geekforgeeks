#include <bits/stdc++.h>
using namespace std;
bool isBinary(string str);
int main()
{
    string str;
    int t;
    scanf("%d\n", &t);
    while (t--)
    {
       cin >> str;
       cout << isBinary(str) << endl;
    }
    return 0;
}
bool isBinary(string str)
{
   for(int i=0;i<str.length();i++){
       if(str.at(i)!='0' && str.at(i)!='1'){
           return 0;
       }
   }
   return 1;
}
