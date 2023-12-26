#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,a,b,c,sum;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        sum=a+b+c;
        cout<<((sum-min({a,b,c})>=10)?"YES":"NO")<<endl;
    }
    return 0;
}