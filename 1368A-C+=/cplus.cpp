#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long count=-1,a,b,n;
        cin>>a>>b>>n;
        while(a<=n || b<=n)
        {
            if(a>b)
            {
                b+=a;
            }
            else
            {
                a+=b;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}