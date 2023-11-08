#include<iostream>
using namespace std;

int main()
{
    string ans="I hate";
    int n;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            ans+=" that I love";
        }
        else if(i%2==1)
        {
            ans+=" that I hate";
        }
    }
    cout<<ans<<" it"<<endl;
    return 0;
}