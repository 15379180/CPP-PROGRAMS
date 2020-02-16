#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,m;
    cin>>t;
    for(int i=0;i<t;++i)
    {
        cin>>h>>m;
        int ans;
        int hl=24-h;
        if(hl==1)
            cout<<60-m;
        else if(hl>1)
        {
            ans=hl*60+(60-m);
            cout<<ans;
        }

    }
    return 0;
}
