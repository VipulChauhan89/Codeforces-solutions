#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>s;
        int sum=0;
        for(auto &ch:s)
        {
            if(ch=='+')
            {
                sum++;
            }
            else
            {
                sum--;
            }
        }   
        cout<<abs(sum)<<endl;
    }
    return 0;
}