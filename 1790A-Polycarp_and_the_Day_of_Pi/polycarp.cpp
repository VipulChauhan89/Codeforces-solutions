#include<iostream>
using namespace std;

int main()
{
    string pi="314159265358979323846264338327",n;
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        cin>>n;
        for(int i=0;i<n.length();i++)
        {
            if(pi[i]!=n[i])
            {
                break;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}