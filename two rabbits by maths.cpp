#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,a,b;
    for(int i=0;i<t;++i)
    {
        cin>>x>>y>>a>>b;
        if((y-x)%(a+b)==0)
        {
            cout<<(y-x)/(a+b)<<endl;   //since x+ma=y-mb , =>m=(y-x)/(a+b)
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
