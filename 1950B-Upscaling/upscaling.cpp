#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            for(int j=0;j<2*n;j++)
            {
                cout<<((i/2+j/2 & 1)?'.':'#');
            }
            cout<<endl;
        }
    }
    return 0;
}