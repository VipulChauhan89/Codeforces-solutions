#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    string ans="NO";
    cin>>n;
    vector<string> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i].substr(0,2)=="OO")
        {
            a[i][0]='+';
            a[i][1]='+';
            ans="YES";
        }
        else if(a[i].substr(3,2)=="OO")
        {
            a[i][3]='+';
            a[i][4]='+';
            ans="YES";
        }
        if(ans=="YES")
        {
            break;
        }
    }
    cout<<ans<<endl;
    if(ans=="YES")
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    return 0;
}