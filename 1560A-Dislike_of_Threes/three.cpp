#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,k,j=0;
    vector<int> a(1000,0);
    for(int i=1;i<=1666;i++)
    {
        if(i%3!=0)
        {
            if(i%10!=3)
            {
                a[j++]=i;
            }
        }
    }
    cin>>t;
    while(t--)
    {
        cin>>k;
        cout<<a[k-1]<<endl;
    }
    return 0;
}