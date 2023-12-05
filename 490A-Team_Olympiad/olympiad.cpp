#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n,t;
    cin>>n;
    vector<int> a,b,c;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t==1)
        {
            a.push_back(i+1);
        }
        else if(t==2)
        {
            b.push_back(i+1);
        }
        else
        {
            c.push_back(i+1);
        }
    }
    int size=min({a.size(),b.size(),c.size()});
    cout<<size<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
    return 0;
}