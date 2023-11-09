#include<iostream>
#include<vector>
using namespace std;

int main()
{
    string ans="I become the guy.";
    int n,p,num;
    cin>>n;
    vector<bool> A(n);
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>num;
        A[num-1]=true;
    }
    cin>>p;
    for(int i=0;i<p;i++)
    {
        cin>>num;
        A[num-1]=true;
    }
    for(int i=0;i<n;i++)
    {
        if(A[i]==false)
        {
            ans="Oh, my keyboard!";
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}