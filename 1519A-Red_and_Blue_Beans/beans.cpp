#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,b,d;
        cin>>r>>b>>d;
        int diff=abs(r-b), mn=min(r,b) ;
        int each=(diff+mn-1)/mn;
        if(each<=d)
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