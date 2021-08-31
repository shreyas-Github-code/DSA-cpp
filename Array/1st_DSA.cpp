#include <iostream>
using namespace std;

void reversearray(int arrr[],int start,int end)
{
        while(start<end){
            int temp =arrr[start];
            arrr[start]=arrr[end];
            arrr[end]=temp;
            start++;
            end--;
        }
}

void printarray(int arrr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arrr[i];
    }
}

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
    printarray(arr,n);
    cout<<" "<<endl;
    reversearray(arr,0,n-1);
    cout<<" "<<endl;
    printarray(arr,n);

    return 0;
}
    