#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=s.length();
    for(int i=0;i<t;++i)
    {
        if(s[i]==s[t-i-1])
        {
            cout<<"pallindrome"<<endl;
            break;
        }
        else
        {
            cout<<"not pallindrome"<<endl;
            break;
        }
    }
    return 0;
}
