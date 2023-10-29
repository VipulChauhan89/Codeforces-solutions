#include<iostream>
using namespace std;

int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    cout<<((n%a!=0)?n/a+1:n/a)*((m%a!=0)?m/a+1:m/a)<<endl;
    return 0;
}