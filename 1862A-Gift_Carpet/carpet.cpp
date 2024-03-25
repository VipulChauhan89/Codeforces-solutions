#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        int count=0;
        string s="vika";
        cin>>n>>m;
        vector<string> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;i<m;i++)
        {
            for(auto ss:v)
            {
                if(ss[i]==s[count])
                {
                    count++;
                    break;
                }
            }
            if(count==4)
            {
                break;
            }
        }
        cout<<((count==4)?"YES":"NO")<<endl;
    }
    return 0;
}