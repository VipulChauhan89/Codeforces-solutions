#include<iostream>
using namespace std;

int main()
{
    int n,m,c,mwin=0,cwin=0,draw=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m>>c;
        if(m<c)
        {
            cwin++;
        }
        else if(m>c)
        {
            mwin++;
        }
        else
        {
            draw++;
        }
    }
    if(draw==n || mwin==cwin)
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(mwin>cwin)
    {
        cout<<"Mishka"<<endl;
    }
    else
    {
        cout<<"Chris"<<endl;
    }
    return 0;
}