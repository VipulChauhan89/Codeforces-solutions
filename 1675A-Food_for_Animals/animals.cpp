#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c,x,y;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y;
        x=(x>a)?x-a:0;
        y=(y>b)?y-b:0;
        cout<<((c>=x+y)?"YES":"NO")<<endl;
    }
    return 0;
}