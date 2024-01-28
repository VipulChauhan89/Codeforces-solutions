#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string dictonary="abcdefghijklmnopqrstuvwxyz";
        while(n--)
        {
            cout<<dictonary.substr(0,k);
        }
        cout<<endl;
    }
    return 0;
}
