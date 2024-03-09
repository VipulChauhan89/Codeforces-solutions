#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    vector<int> a(7);
    while(t--)
    {
        for(int i=0;i<7;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        cout<<a[0]<<" "<<a[1]<<" ";
        for(int i=2;i<7;i++)
        {
            if(a[0]+a[1]+a[i]==a[6])
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
    return 0;
}