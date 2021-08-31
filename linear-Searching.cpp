#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    cout<<"\n Start :\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"\n\n";

    int key;
    cout<<"Enter the KEY :";
    cin>>key;

    for(int o=0;o<n;o++)
    {
        if(a[o]==key)
        {
            cout<<"\n KEY is present in position :"<<o;
        }
    }


return 0;
}