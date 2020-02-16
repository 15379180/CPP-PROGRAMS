#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int x,y,a,b;
    int c=0;
    for(int i=0;i<t;++i)
    {
        cin>>x>>y>>a>>b;
        for(int j=0;;++j)
        {

                if(x+a*j==y-b*j)
                {
                    cout<<(y-x)/a+b<<endl;
                    break;
                }

            }


    }
    return 0;
}
