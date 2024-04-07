#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=3;
        cin>>n;
        while(n--) 
        {
            cout<<k<<" ";
            k+=2;
        }
        cout<<endl;
    }
    return 0;
}