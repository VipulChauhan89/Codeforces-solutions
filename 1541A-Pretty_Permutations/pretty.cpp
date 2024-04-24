#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long start=1;
        if(n%2!=0) 
        {
            start=4;
            cout<<"3 1 2 ";
        }
        for(long p=start;p<n;p+=2) 
        {
            cout<<p+1<<" "<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}