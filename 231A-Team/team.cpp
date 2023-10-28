#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    while(n--)
    {
        int p,v,t;
        cin>>p>>v>>t;
        count+=(p+v+t>1)?1:0;
    }
    cout<<count<<endl;
    return 0;
}