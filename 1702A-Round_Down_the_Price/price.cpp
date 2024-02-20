#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int t,m;
    cin>>t;
    while(t--)
    {
        cin>>m;
        int temp=m,flag=1;
        while(1)
        {
            temp/=10;
            if(temp==0)
            {
                break;
            }
            flag*=10;
        }
        cout<<m-flag<<endl;
    }
    return 0;
}