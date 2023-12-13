#include<iostream>
using namespace std;

int main()
{
    int y,w;
    cin>>y>>w;
    int mx=(y>w)?y:w;
    mx=6-mx+1;
    if(mx==6)
    {
        cout<<"1/1"<<endl;
    }
    else if(mx<=0)
    {
        cout<<"0/1"<<endl;
    }
    else if(mx%2==0)
    {
        cout<<mx/2<<"/3"<<endl;
    }
    else if(mx%3==0)
    {
        cout<<mx/3<<"/2"<<endl;
    }
    else
    {
        cout<<mx<<"/"<<6<<endl;
    }
    return 0;
}