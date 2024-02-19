#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string ans="YES";
        long long sum=0,less=0,excess=0,res=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        less=sum/n;
        for(int i=0;i<n;i++)
        {
            if(a[i]>=less)
            {
                excess+=abs(a[i]-less);
            }
            else
            {
                res=abs(a[i]-less);
                if(res>excess)
                {
                    ans="NO";
                    break;
                }
                else
                {
                    a[i]+=res;
                    excess-=res;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
