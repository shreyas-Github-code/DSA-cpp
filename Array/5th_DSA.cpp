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
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            int temp =arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    cout<<"now arrays look like"<<endl;

      for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    
    return 0;
}