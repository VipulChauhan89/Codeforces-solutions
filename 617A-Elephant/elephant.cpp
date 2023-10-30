#include<iostream>
using namespace std;

int main()
{
    int x,i=5,steps=0;
    cin>>x;
    while(x!=0)
    {
        steps+=x/i;
        x%=i;
        i--;
    }
    cout<<steps<<endl;
    return 0;
}