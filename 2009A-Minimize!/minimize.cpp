#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        int mx=INT_MAX;
        cin>>a>>b;
        for(int c=a;c<=b;c++)
        {
            mx=min(mx,(c-a)+(b-c));
        }
        cout<<mx<<endl;
    }
    return 0;
}
