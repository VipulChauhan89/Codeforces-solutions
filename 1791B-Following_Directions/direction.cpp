#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<char,pair<int,int>> m;
    m['U']={0,1};
    m['D']={0,-1};
    m['L']={-1,0};
    m['R']={1,0};
    int t,n;
    cin>>t;
    while(t--)
    {
        int x=0,y=0;
        string s,ans="NO";
        cin>>n>>s;
        for(auto i:s)
        {
            x+=m[i].first;
            y+=m[i].second;
            if(x==1 && y==1)
            {
                ans="YES";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}