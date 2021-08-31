#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"number of elements u want :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"type " << n << " numbers"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
   

    int c1=0,c2=0,c3=0;
    for(int i =0;i<n;i++)
    {
        if(arr[i]==0){
            c1++;
        }
        else if(arr[i]==1)
        {
            c2++;
        }
        else if(arr[i]==2)
        {
            c3++;
        }
    }
    int k=0;
   for(int i =0;i<c1;i++)arr[k++]=0;
   for(int i =0;i<c2;i++)arr[k++]=1; 
   for(int i =0;i<c3;i++)arr[k++]=2;

    cout<<"arrays r as follow :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    return 0;
}
