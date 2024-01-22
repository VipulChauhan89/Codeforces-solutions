#include<iostream>
using namespace std;

int main()
{
    int t,x;
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<((x%2==0)?(to_string(x/2)+" "+to_string(x/2)):(to_string(x-1)+" 1"))<<endl;
    }
    return 0;
}