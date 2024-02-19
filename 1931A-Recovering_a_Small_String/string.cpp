#include<iostream>
#include<vector>
using namespace std;

int main()
{
    char c='a';
    vector<char> a(26);
    for(int i=0;i<26;i++)
    {
        a[i]=c++;
    }
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n<=28)
        {
            cout<<"aa"<<a[n-3]<<endl;
        }
        else if(n<=53)
        {
            n-=26;
            cout<<"a"<<a[n-2]<<"z"<<endl;
        }
        else
        {
            n-=52;
            cout<<a[n-1]<<"zz"<<endl;
        }
    }
    return 0;
}
