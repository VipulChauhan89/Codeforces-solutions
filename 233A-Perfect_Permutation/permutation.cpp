#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            cout<<((i%2==0)?i-1:i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}