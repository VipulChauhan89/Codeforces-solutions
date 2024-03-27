#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,x,c,r;
        cin>>n>>m>>x;
        c=(x/n);
        r=x%n;
        if(x%n!=0)
        {
            c++;
        }
        if(r==0)
        {
            r=n;
        }
        cout<<((r-1)*m)+c<<endl;
    }
    return 0;
}