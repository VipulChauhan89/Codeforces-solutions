#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string ans="NO";
    int n,m;
    cin>>n>>m;
    for(int i=n+1;i<=m;i++)
    {
        if(isPrime(i))
        {
            if(i==m)
            {
                ans="YES";
            }
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}