#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
    vector<bool> A(10000000,false);
    for(int i=2;i<=10000000;i++)
    {
        if(A[i]==false)
        {
            for(int j=2;i*j<=10000000;j++)
            {
                A[i*j]=true;
            }
        }
    }
    long long n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        long long sq=sqrt(x);
        if(x==1)
        {
            cout<<"NO"<<endl;
        }
        else if((sq*sq==x) && (A[sq]==false))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}