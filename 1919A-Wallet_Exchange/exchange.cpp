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
        cout<<(((a+b)%2==1)?"Alice":"Bob")<<endl;
    }
    return 0;
}