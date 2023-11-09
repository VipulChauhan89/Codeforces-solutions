#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        cout<<((a%b==0)?0:b-a%b)<<endl;
    }
    return 0;
}