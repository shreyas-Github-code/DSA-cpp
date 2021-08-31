#include <iostream>
using namespace std;

int maxsumsabarray(int arr[] , int n)
{
    int maxsum=INT_MIN;
    int cursum=0;                                    //       ____________________
                                                     //      |                    |
    for(int i=0;i<n;i++){                            //      | timecompexity=O(n) |
        cursum=cursum + arr[i];                      //      |____________________|
        if(cursum>maxsum){
            maxsum=cursum;
        }
        if(cursum<0)
        {
            cursum=0;
        }
    }
    return maxsum;
}

int main()
{
    int n;
    cout << "number of elements u want :" << endl;
    cin >> n;
    int arr[n];
    cout << "type " << n << " numbers" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    cout<<endl<<" "<<maxsumsabarray(arr,n);
}