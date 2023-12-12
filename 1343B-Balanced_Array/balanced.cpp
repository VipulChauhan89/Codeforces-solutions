#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n/2)%2!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int even=2,odd=1;
            for(int i=0;i<n/2;i++)
            {
                cout<<even<<" ";
                even+=2;
            }
            even-=2;
            for(int i=1;i<n/2;i++)
            {
                cout<<odd<<" ";
                odd+=2;
            }
            cout<<even+(n/2)-1<<endl;
        }
    }
    return 0;
}