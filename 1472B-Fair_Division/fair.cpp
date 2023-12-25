#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        int one=0,sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(num==1)
            {
                one++;
                sum++;
            }
            else
            {
                sum+=2;
            }
        }
        if(sum%2==0)
        {
            int div=sum/2;
            if(div%2==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<((one)?"YES":"NO")<<endl;
            }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}