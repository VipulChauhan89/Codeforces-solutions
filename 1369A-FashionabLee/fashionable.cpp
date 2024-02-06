#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<((n%4==0)?"YES":"NO")<<endl;
    }
    return 0;
}