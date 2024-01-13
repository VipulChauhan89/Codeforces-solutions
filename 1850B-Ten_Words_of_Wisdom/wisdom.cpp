#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long currWinner=0,pos=0;
        for(int i=0;i<n;i++)
        {
            long long m,q;
            cin>>m>>q;
            if(m<=10)
            {
                if(q>currWinner)
                {
                    currWinner=q;
                    pos=i+1;
                }
            }
        }
        cout<<pos<<endl;
    }
    return 0;
}