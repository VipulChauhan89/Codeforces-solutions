#include<iostream>
using namespace std;

int main()
{
    unsigned long long k,r,ans=1;
    cin>>k>>r;
    while((ans*k)%10!=r)
    {
        if((ans*k)%10==0)
        {
            break;
        }
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}