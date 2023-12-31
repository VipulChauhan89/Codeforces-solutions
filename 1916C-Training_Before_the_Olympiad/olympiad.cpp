#include<iostream>
using namespace std;
 
int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        int odd=0,even=0;
        unsigned long long sum=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            sum+=num;
            (num&1)?odd++:even++;
            cout<<sum-((even==0 && odd==1)?0:((odd%3==1)?((odd+2)/3):(odd/3)))<<" ";
        }
        cout<<endl;
    }
    return 0;
}