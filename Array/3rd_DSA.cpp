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
   cout<<endl;
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(arr[i]>arr[j])
           {
               int temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   cout<<endl<<"sorted array :";
     for(int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl<<"Enter the value of K :";

    int k;
    cin>>k;
    cout<<endl<<" "<<k<<"th max :"<<arr[n-k]<<" and min :"<<arr[k-1];
    return 0;
}