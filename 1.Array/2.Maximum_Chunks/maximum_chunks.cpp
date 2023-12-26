//O(n) approach most optimal
#include<iostream>
using namespace std;
 

int main()
{
    int arr[]={1,2,0,4,3,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    int cnt =0;
    int i=0;
    int maxi=0;
    while(i<n)
    {
        maxi=max(maxi,arr[i]);
        if(maxi==i)
        {
            cnt++;
        }
       i++;
        
    }
    cout<<cnt;
    return 0;
}