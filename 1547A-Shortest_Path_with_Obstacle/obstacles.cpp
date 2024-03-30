#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x1,x2,x3,y1,y2,y3;
        cin>>x1>>y1>>x2>>y2>>x3>>y3;
        int ans=abs(x1-x2)+abs(y1-y2);
        if((x1==x2 && x1==x3 && y3>min(y1,y2) && y3<max(y1,y2)) || (y1==y2 && y1==y3 && x3>min(x1,x2) && x3<max(x1,x2)))
        {
            ans+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}