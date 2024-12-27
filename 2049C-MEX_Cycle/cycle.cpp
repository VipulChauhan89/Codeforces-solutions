#include <iostream>
#include <vector>
using namespace std;

void solve(int n,int x,int y)
{
    if(x==1 && y==n)
    {
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<i%2<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                cout<<i%2<<" ";
            }
            cout<<2<<endl;
        }
        return;
    }
    if(y==x+1)
    {
        if(n%2==0)
        {
            for(int i=0;i<n;i++)
            {
                cout<<i%2<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=0;i<n-1;i++)
            {
                cout<<i%2<<" ";
            }
            cout<<2<<endl;
        }
        return;
    }
    else
    {
        vector<int> v(n);
        v[x-1]=0;
        v[y-1]=1;
        for(int i=x;i<y-1;i++)
        {
            v[i]=1-v[i-1];
        }
        if(v[y-1]==v[y-2])
        {
            v[y-2]=2;
        }
        int prev=v[y-1],cnt=2;
        for(int i=y%n;i!=x-1;i=(i+1)%n)
        {
            cnt++;
        }
        if(cnt%2)
        {
            v[y%n]=2;
            for(int i=(y+1)%n;i!=x-1;i=(i+1)%n)
            {
                v[i]=1-prev;
                prev=v[i];
            }
        }
        else
        {
            for(int i=y%n;i!=x-1;i=(i+1)%n)
            {
                v[i]=1-prev;
                prev=v[i];
            }
        }
        for(auto &i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        solve(n,x,y);
    }
    return 0;
}
