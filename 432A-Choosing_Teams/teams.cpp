#include<iostream>
using namespace std;

int main()
{
    int n,k,count=0,m=0,num;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(k+num<=5)
        {
            m++;
            if(m==3)
            {
                m=0;
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
}