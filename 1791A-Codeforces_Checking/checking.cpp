#include<iostream>
using namespace std;

int main()
{
    int t;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c;
        cout<<((c=='c' || c=='o' || c=='d' || c=='e' || c=='f' || c=='r' || c=='s')?"YES":"NO")<<endl;
    }
    return 0;
}