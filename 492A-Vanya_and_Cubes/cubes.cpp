#include<iostream>
using namespace std;

int  main()
{
    int n,i=1,m=1,count=0;
    cin>>n;
    while(m<=n)
    {
        m=((i*i)+i)/2;
        if(m>n)
        {
            break;
        }
        n-=m;
        count++;
        i++;
    }
    cout<<count<<endl;
    return 0;
}