#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    cout<<((m*a<=b)?n*a:(n/m)*b+min((n%m)*a,b))<<endl;
    return 0;
}
