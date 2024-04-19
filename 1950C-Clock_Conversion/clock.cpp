#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        string a=s.substr(0,2),b=s.substr(3, 2);
        int hour=stoi(a);
        int minute=stoi(b);
        if(hour==0)
        {
            cout<<"12:"<<setw(2)<<setfill('0')<<minute<<" AM"<<endl;
        }
        else if(hour==12)
        {
            cout<<"12:"<<setw(2)<<setfill('0')<<minute<<" PM"<<endl;
        }
        else if(hour<12)
        {
            cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<minute<<" AM"<<endl;
        }
        else
        {
            int hour_12=hour-12;
            cout<<setw(2)<<setfill('0')<<hour_12<<":"<<setw(2)<<setfill('0')<<minute<<" PM"<<endl;
        }
    }
    return 0;
}
