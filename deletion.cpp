#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int ar[n];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int pos;
    cout<<"enter value to be deleted at the position"<<endl;
    cin>>pos;
    for(int i=pos;i<=n-1;i++)
    {
        ar[i]=ar[i+1];
    }
    for(int i=0;i<n-1;i++)
    cout<<ar[i]<<"\t";
    cout<<endl;
    return 0;
}