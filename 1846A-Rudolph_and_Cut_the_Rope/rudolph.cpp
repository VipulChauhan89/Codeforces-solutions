#include<iostream>
using namespace std;

int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n;
        while(n--)
        {
            cin>>a>>b;
            if(a>b)
            {
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}