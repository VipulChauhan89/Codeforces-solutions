#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string ans="YES";
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) 
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i+=2) 
        {
            if(a[i]%2!=a[0]%2) 
            {
                ans="NO";
                break;
            }
        }
        for(int i=1;i<n;i+=2) 
        {
            if(a[i]%2!=a[1]%2) 
            {
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}