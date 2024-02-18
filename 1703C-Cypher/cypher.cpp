#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>m;
            char c;
            for(int j=0;j<m;j++)
            {
                cin>>c;
                if(c=='D')
                {
                    a[i]=(a[i]+1)%10;
                }
                else
                {
                    if(a[i]==0)
                    {
                        a[i]=9;
                    }
                    else
                    {
                        a[i]--;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}