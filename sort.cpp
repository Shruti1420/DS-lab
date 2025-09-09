#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int x;
    cout<<"enter number"<<endl;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(ar[i]>x)
        {
        for(int j=n-1;j>=i;j--)
        {
            ar[j+1]=ar[j];
        }
        ar[i]=x;
        break;
        }
    }
    for(int i=0;i<=n;i++)
    {
        cout<<ar[i]<<"\t";
    }

}
