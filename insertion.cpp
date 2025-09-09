#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int ar[n+1];
    cout<<"enter array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int val,pos;
    cout<<"enter value to be inserted and the position"<<endl;
    cin>>val>>pos;
    for(int i=n-1;i>=pos;i--)
    {
        ar[i+1]=ar[i];
    }
    ar[pos]=val;
    for(int i=0;i<=n;i++)
    cout<<ar[i]<<"\t";
    cout<<endl;
    return 0;

}