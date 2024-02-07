#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string ans="";
        cin>>n;
        vector<int> a(n),b(26,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            for(int j=0;j<26;j++)
            {
                if(b[j]==a[i])
                {
                    ans+='a'+j;
                    b[j]++;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
