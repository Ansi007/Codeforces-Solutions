#include<iostream>
#include<string>
using namespace std;
string mininumInvertingPostiveNumber(string  s)
{
    int length=s.size();
   int  first=s[0]-'0';
    if(first>=5 && first!=9)
    {
        s[0]=(9-first)+'0';
    }
    for(int i=1;i<length;i++)
    {
        int num=s[i]-'0';
        if(num>=5)
            s[i]=(9-num)+'0';
    }
    return s;
}
int main()
{
    string s;
    cin>>s;
    cout<<mininumInvertingPostiveNumber(s);
}