#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        int count=0,i=0;
        string s;
        cin>>n>>k>>s;
        while(i<n)
        {
            if(s[i]=='B')
            {
                i=min(n,i+k);
                count++;
            }
            else
            {
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}