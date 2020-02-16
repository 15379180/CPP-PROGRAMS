#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;++j)
    {
        int flag=0;
        string a,b,c;
        cin>>a>>b>>c;
        int s=a.length();
        for(int i=0;i<s;++i)
        {
            if(a[i]==c[i] || b[i]==c[i]){continue;}
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
