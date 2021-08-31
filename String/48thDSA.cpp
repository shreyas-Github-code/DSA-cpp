#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="shreerhs";
    int s=0,e=a.size()-1;
    while(s<e)
    {
        if(a[s]!=a[e])
        {
            cout<<"PALINDROME NAI HAI BHAI";
            return 0;
        }
        s++;
        e--;
    }
    cout<<"PALINDROME HAI BHAI";
    return 0;
}