#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        unsigned long long product=1;
        cin>>n>>k;
        vector<int> b(n);
        for(int i=0;i<n;i++) 
        {
            cin>>b[i];
            product*=b[i];
        }
        if(2023%product==0)
        {
            unsigned long long prod=2023/product;
            cout<<"YES"<<endl;
            k--;
            cout<<prod<<" ";
            while(k--)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}