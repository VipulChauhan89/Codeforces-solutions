#include<iostream>
using namespace std;

int point(int i,int j)
{
    if(i==0 || i==9 || j==0 || j==9)
    {
        return 1;
    }
    else if(i==1 || i==8 || j==1 || j==8)
    {
        return 2;
    }
    else if(i==2 || i==7 || j==2 || j==7)
    {
        return 3;
    }
    else if(i==3 || i==6 || j==3 || j==6)
    {
        return 4;
    }
    else 
    {
        return 5;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        char c;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>c;
                if(c=='X')
                {
                    sum+=point(i,j);
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}