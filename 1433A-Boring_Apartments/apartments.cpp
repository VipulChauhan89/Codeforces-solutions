#include<iostream>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        int sum=0;
        int digit=x%10;
        while(digit>1)
        {
            sum+=10;
            digit--;
        }
        for(int i=1;i<=4;i++)
        {
            if(x==0)
            {
                break;
            }
            x/=10;
            sum+=i; 
        }
        cout<<sum<<endl;
    }
    return 0;
}