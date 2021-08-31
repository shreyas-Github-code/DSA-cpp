#include <iostream>
using namespace std;                                                                           
                                                                                                     
void printunion(int arr1[],int arr2[],int m,int n)
{                                                                                                     
    int i=0,j=0;                                                                                         
    while(i<m && j<n)                                                                                  
    {                                                                                             
        if(arr1[i]<arr2[j])                                                                                           
        {
            cout<<" "<<arr1[i];
            i++;                                                            //{4,5,8,9,11}
        }                                                                   //{5,6,7,8,9}
        else if(arr2[j]<arr1[i])
        {
            cout<<" "<<arr2[j];
            j++;
        }
        else{
            cout<<" "<<arr2[j];
            j++;
            i++;
        }
    }
    while(i < m)
    {
        cout<<" "<<arr1[i];
        i++;
    }
    while(j < n)
    {
        cout<<" "<<arr2[j];
        j++;
    }
}
void printintersection(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i < m && j < n)
    {
        if(arr1[i]<arr2[j])
        {
            i++;                                                            //{4,5,8,9,11}
        }                                                                   //{5,6,7,8,9}
        else if(arr2[j]<arr1[i])
        {
            
            j++;
        }
        else if(arr1[i] == arr2[j]){
            cout<<" "<<arr2[j];
            j++;
            i++;
        }
    }
  
}

int main()
{
    int arr1[] ={4,5,8,9,11};
    int arr2[] ={5,6,7,8,9};
    int m= sizeof(arr1)/sizeof(arr1[0]);
    int n= sizeof(arr2)/sizeof(arr2[0]);
    printunion(arr1,arr2,m,n);
    cout<<endl;
    printintersection(arr1,arr2,m,n);
    return 0;
}