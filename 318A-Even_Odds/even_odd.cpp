#include<iostream>
using namespace std;

int main()
{
    long long n,k,e,o,ans;
    cin>>n>>k;
    o=(n%2==0)?n/2:(n/2)+1;
    e=n-o;
    cout<<((k<=o)?(k*2)-1:(k-o)*2)<<endl;
    return 0;
}