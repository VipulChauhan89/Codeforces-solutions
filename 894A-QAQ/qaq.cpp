#include<iostream>
using namespace std;

int main()
{
    int q=0,qa=0,qaq=0;
    string s;
    cin>>s;
    for(auto i:s)
    {
        if(i=='Q')
        {
            q++;
            qaq+=qa;
        }
        else if(i=='A')
        {
            qa+=q;
        }
    }
    cout<<qaq<<endl;
    return 0;
}