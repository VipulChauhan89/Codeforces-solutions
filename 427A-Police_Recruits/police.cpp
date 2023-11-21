#include<iostream>
using namespace std;

int main()
{
    int n,count=0,num,ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num!=-1)
        {
            count+=num;
        }
        else
        {
            if(count-1>=0)
            {
                count--;
            }
            else
            {
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}