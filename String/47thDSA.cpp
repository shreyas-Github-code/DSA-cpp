#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    char a[5]={'a','e','i','o','u'};
    int s=0;
    int e=5-1;
    while(s<e)
    {
        swap(a[s],a[e]);
        s++;
        e--;
    }
    int i=0;
    while(i!=5)
    {
        cout<<a[i]<<" ";
        i++;
    }
    return 0;

}