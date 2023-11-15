#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<pair<int,int>> a(2,{0,0});
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        a[num%2].first++;
        a[num%2].second=i+1;
    }   
    cout<<((a[0].first==1)?a[0].second:a[1].second)<<endl;
    return 0;
}