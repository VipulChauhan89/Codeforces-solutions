#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n==0)
        {
            float avg=(float)sum/(float)n;
            int k=0;
            for(int i=0;i<n;i++) 
            {
                if(a[i]>avg)
                {
                    k++;
                }
            }
            cout<<k<<endl;
        } 
        else
        {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}