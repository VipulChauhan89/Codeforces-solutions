#include<iostream>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        int sum=0,flag=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(num%3==1)
            {
                flag=1;
            }
            sum+=num;
        }
        cout<<((sum%3==0)?0:((flag==1)?1:3-sum%3))<<endl;
    }
    return 0;
}