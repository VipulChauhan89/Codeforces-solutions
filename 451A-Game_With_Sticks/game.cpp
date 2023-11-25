#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int b=(m>n)?n:m;
    cout<<((b%2==0)?"Malvika":"Akshat")<<endl;
    return 0;
}