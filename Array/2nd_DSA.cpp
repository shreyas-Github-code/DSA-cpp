#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"number of elements u want :"<<endl;
    cin>>n;
    int a[n];
    cout<<"type " << n << " numbers"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"\nMAX => "<<max;
    cout<<"\nMIN => "<<min;

}