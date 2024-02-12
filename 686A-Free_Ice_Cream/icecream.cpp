#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,count=0,num;
    unsigned long long x;
    char op;
    cin>>n>>x;
    for(int i=0;i<n;i++)
    {
        cin>>op>>num;
        if(op=='+')
        {
            x+=num;
        }
        else
        {
            if(x>=num)
            {
                x-=num;
            }
            else
            {
                count++;
            }
        }
    }
    cout<<x<<" "<<count<<endl;
    return 0;
}