#include <iostream>
using namespace std;

int binarySearch(int a[], int beg, int end, int item)  
{  
    int mid;  
    while(end >= beg)   
    {     
        mid = beg+(end-beg)/2;  
        if(a[mid] == item)  
        {  
            return mid;  
        }  
        else if(a[mid] < item)   
        {  
            beg = mid + 1;  
        }  
        else   
        {  
            end = mid - 1;   
        }  
      
    }  
    return -1;   
}   

int main()
{
    int n;
    cin>>n;
    
    cout<<"\n start entering the elements :\n";
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,e=n-1;
    
    cout<<"\nEnter the key value :";
    int key;
    cin>>key;
    
    if(binarySearch(a,l,e,key)==-1)
    {
        cout<<"\nThis key is not present!!";
        return 0;
    }

    cout<<"\nkey present in position :"<<binarySearch(a,l,e,key);
    
    return 0;
}

