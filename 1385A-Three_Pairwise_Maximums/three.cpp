#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    vector<int> a(3);
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        if(a[1]==a[2])
        {
            cout<<"YES"<<endl<<a[0]<<" "<<a[0]<<" "<<a[1]<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}