#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
            cin>>a[i];
            for(int i=0;i<m;i++)
                cin>>b[i];
                vector<int> v1,v2;
                int onr =-1 ,two=-1;
            int max=1e9;
            for(inti=0;i<n;i++)
                if(a[i]==1) {v1.push_back(0) ; one=i;}
                else if(one==-1)    {v1.push_back(max);}
                else if(a[i]==2)    {v1.push_back(0);}
                else    {v1.push_back(i-one);}
            for(int i=n-1;i>=0;i--)
            {
                if(a[i]==2) {v2.push_back(0); two=i;}
                else if(two==-1&&a[i]==0)   {v2.push_back(max);}
                else if (a[i]==1)   {v2.push_back(0);}
                else    {v2.push_back(two-i);}
            }
            reverse(v2.begin(),v2.end());
            for(int i=0;i<m;i++)
            {
                int curr =b[i];
                if(a[0]!=0&&a[curr-1]!=0)
                    cout<<'0'<<" ";
                else if(curr==1)
                    cout<<"0"<<" ";
                else
                {
                    int ans=0;
                    if(v1[curr-1]==max&&v2[curr-1]==max)
                    ans=-1;
                    else
                    ans=min(v1[cur-1],v2[curr-1]);
                    cout<<ans<<" ";
                }
            }
            cout<<endl;

    }
    return 0;
}