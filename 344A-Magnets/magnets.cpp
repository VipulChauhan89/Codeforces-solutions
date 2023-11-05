#include<iostream>
using namespace std;

int main()
{
    int n,count=0;
    string previous="",s;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s!=previous)
        {
            count++;
        }
        previous=s;
    }
    cout<<count<<endl;
    return 0;
}