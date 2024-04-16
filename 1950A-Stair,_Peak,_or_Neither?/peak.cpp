#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<((a<b && b<c)?"STAIR":((a<b && b>c)?"PEAK":"NONE"))<<endl;        
    }
    return 0;
}