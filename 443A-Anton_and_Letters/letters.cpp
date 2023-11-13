#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<char,int> v;
    string s;
    getline(cin,s);
    for(char i:s)
    {
        if(i!='{' && i!='}' && i!=',' && i!=' ')
        {
            v[i]++;
        }
    }
    cout<<v.size()<<endl;
    return 0;
}