#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int count_zero=0,segment=0,prev=0;
        cin>>n;
        vector<int> A(n);
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
            if(A[i]==0)
            {
                count_zero++;
            }
            else
            {
                if(prev==0)
                {
                    segment++;
                }
            }
            prev=A[i];
        }
        if(count_zero==n)
        {
            cout<<0<<endl;
        }
        else if(segment==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    return 0;
}
