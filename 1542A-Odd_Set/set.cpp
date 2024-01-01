#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int t,n,num;
    cin>>t;
    while(t--)
    {
        vector<int> a(2,0);
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            cin>>num;
            a[num%2]++;
        }
        cout<<((min(a[0],a[1])==n)?"Yes":"No")<<endl;
    }
    return 0;
}