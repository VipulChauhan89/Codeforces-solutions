#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long a,b;
        cin>>a>>b;
        cout<<((a!=0)?a+(b*2)+1:1)<<endl;
    }
    return 0;
}