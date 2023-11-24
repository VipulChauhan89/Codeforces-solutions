#include<iostream>
using namespace std;

int main()
{
    int n,m,num,prev=0;
    unsigned long long ans=0;
    cin>>n>>m;
    while(m--)
    {
        cin>>num;
        if(prev==0)
        {
            ans+=num;
        }
        else
        {
            if(num==prev)
            {
                continue;
            }
            else if(num<prev)
            {
                ans+=(n-prev+num);
            }
            else
            {
                ans+=(num-prev);
            }
        }
        prev=num;
    }
    cout<<ans-1<<endl;
    return 0;
}