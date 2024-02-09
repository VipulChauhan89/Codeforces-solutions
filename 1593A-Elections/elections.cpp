#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        int mx=(a>b)?a:b;
        mx=(mx>c)?mx:c;
        bool tie=(((a==mx)+(b==mx)+(c==mx))>1);
        cout<<((a==mx)?tie:mx-a+1)<<" "<<((b==mx)?tie:mx-b+1)<<" "<<((c==mx)?tie:mx-c+1)<<endl;
    }
    return 0;
}