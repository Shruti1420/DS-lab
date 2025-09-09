#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"enter sizes of two arrays"<<endl;
    cin>>n1>>n2;
    int ar1[n1];
    int ar2[n2];
    for(int i=0;i<n1;i++)
    {
        cin>>ar1[i];
    }
    for(int i=0;i<n2;i++)
    {
        cin>>ar2[i];
    }
    int c=0;
    int ar3[n1+n2];
    int k=0;
    for(int i=0;i<n2;i++)
    {
        for(int j=k;j<n1;j++)
        {
        if(ar1[j]<ar2[i])
        {
            ar3[c++]=ar1[j];
            k++;
        }
        else
        {

            break;
        }
        }
        ar3[c++]=ar2[i];
    }
        for(int i=0;i<n1+n2;i++)
        {
            cout<<ar3[i]<<"\t";
        }
}