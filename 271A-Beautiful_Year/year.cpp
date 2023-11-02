#include<iostream>
#include<vector>
using namespace std;

bool unique(int y)
{
    vector<int> digit(10,0);
    while(y!=0)
    {
        int rem=y%10;
        if(digit[rem]==1)
        {
            return false;
        }
        digit[rem]++;
        y/=10;
    }
    return true;

}
int main()
{
    int y;
    cin>>y;
    y++;
    while(!unique(y))
    {
        y++;
    }
    cout<<y<<endl;
    return 0;
}