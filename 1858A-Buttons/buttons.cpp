#include<iostream>
using namespace std;

int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cout<<(((c%2==0)?((a>b)?"First":"Second"):((b>a)?"Second":"First")))<<endl;
    }
    return 0;
}