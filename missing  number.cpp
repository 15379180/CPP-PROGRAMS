#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;++i)
        cin>>arr[i];
    int b;
    cin>>b;
    int brr[b];
    for(int  i=0;i<b;++i)
        cin>>brr[i];

    int h[200000]={};
    for(int m=0;m<200000;++m)
    {
        h[arr[m]]++;
    }
    int k[200000]={};
    for(int n=0;n<200000;++n)
    {
        k[brr[n]]++;
    }
    for(int n=0;n<200000;++n)
    {
        if(h[n]<k[n])
            cout<<n<<" ";
    }

    return 0;
}

