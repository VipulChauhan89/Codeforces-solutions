#include<iostream>
using namespace std;

int main()
{
    int t,rating;
    cin>>t;
    while(t--)
    {
        cin>>rating;
        if(rating>=1900)
        {
            cout<<"Division 1"<<endl;
        }
        else if(rating>=1600 && rating<=1899)
        {
            cout<<"Division 2"<<endl;
        }
        else if(rating>=1400 && rating<=1599)
        {
            cout<<"Division 3"<<endl;
        }
        else
        {
            cout<<"Division 4"<<endl;
        }
    }
    return 0;
}