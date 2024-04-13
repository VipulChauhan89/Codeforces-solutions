#include<iostream>
using namespace std;

int main()
{
    int n,j=2;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i+=j,j++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    return 0;
}