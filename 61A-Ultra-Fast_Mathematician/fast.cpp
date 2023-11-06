#include<iostream>
using namespace std;

int main()
{
    string n1,n2;
    cin>>n1>>n2;
    for(int i=0;i<n1.length();i++)
    {
        n1[i]=(n1[i]==n2[i])?'0':'1';
    }
    cout<<n1<<endl;
    return 0;
}