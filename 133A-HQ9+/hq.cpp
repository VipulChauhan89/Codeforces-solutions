#include<iostream>
using namespace std;

int main()
{
    string s,ans="NO";
    cin>>s;
    for(auto i:s)
    {
        if(i=='H' || i=='Q' || i=='9')
        {
            ans="YES";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}