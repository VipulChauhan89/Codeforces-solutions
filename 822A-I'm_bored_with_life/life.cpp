#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    unsigned long long n,m,x,k;
    cin>>n>>m;
    x=min(n,m);
    k=1;
    while(x>0)
    {
        k*=x;
        x--;
    }
    cout<<k<<endl;
    return 0;
}