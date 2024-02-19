#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int b=1;
        cin>>n;
        while(b*2<=n)
        {
            b*=2;
        }
        cout<<b-1<<endl;
    }
    return 0;
}