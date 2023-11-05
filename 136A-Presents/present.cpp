#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int n,num;
    cin>>n;
    vector<pair<int,int>> A;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        A.push_back({num,i+1});
    }
    sort(A.begin(),A.end());
    for(auto &i:A)
    {
        cout<<i.second<<" ";
    }
    cout<<endl;
    return 0;
}
