#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long a,b,c;
        cin>>a>>b>>c;
        long first(a-1);
        first=(first>=0)?first:-first;
        long secondA(b-c),secondB(c-1); 
        secondA=(secondA>=0)?secondA:-secondA;
        secondB=(secondB>=0)?secondB:-secondB;
        long second=secondA+secondB;
        if(first<second)
        {
            cout<<1<<endl;
        }
        else if(second<first)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    return 0;
}