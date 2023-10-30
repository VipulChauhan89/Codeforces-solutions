#include<iostream>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int required=k*((w*(w+1))/2);
    (n>=required)?cout<<0<<endl:cout<<required-n<<endl;
    return 0;
}