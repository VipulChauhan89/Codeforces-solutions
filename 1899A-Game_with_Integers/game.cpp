#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<((n%3!=0)?"First":"Second")<<endl;
    }
    return 0;
}