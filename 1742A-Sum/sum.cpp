#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        long long sum=a+b+c,mx=max({a,b,c});
        cout<<(((sum-mx)==mx)?"YES":"NO")<<endl;
    }
    return 0;
}