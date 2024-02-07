#include<iostream>
using namespace std;

int main()
{
    int t,n,k,num;
    cin>>t;
    while(t--)
    {
        string ans="NO";
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(num==k)
            {
                ans="YES";
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}