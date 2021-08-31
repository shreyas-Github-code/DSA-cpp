#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> A={1,99,3,4,5,6,7,7,7,8,9,10};
    sort(A.begin(),A.end());
    for(int i=A.size()-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}